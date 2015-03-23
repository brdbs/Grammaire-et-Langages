
#include "Automate.h"
#include "etat/etat.h"
#include "etat/e00.h"
#include "symbole/LigneDeclaration.h"
#include "symbole/LigneConst.h"
#include "symbole/Affectation.h"
#include "symbole/Ecriture.h"

#include <vector>
using namespace std;

Automate::Automate()
{
	m_symbole = NULL;
}

Automate::Automate(string cheminFichier)
{
	m_lexer.scannerFichier(cheminFichier);
}

Automate::~Automate()
{
}

void Automate::lecture()
{
	m_pileEtats.push(new E00());
	while (!m_pileEtats.top()->isFinal())
	{
		m_pileEtats.top()->transition(this);
	}
}

void Automate::decalage(Symbole *s, Etat *e){
	if(s->estTerminal())
		m_symbole = NULL;

    m_pileSymbole.push(s);
    m_pileEtats.push(e);
}

Symbole * Automate::getNextLexer(){
	if(m_symbole == NULL)
		m_symbole = m_lexer.getNext();

	return m_symbole;
}


void Automate::reduction(Symbole* s, int nbSymboles)
{
	Symbole** listSymbole = new Symbole*[nbSymboles];
	for (int i = nbSymboles -1 ; i > -1; i--)
	{
		Etat * tmp;
		listSymbole[i] = m_pileSymbole.top();
		m_pileSymbole.pop();

		tmp = m_pileEtats.top();
		m_pileEtats.pop();
		delete tmp;
	}
	s->initialiser(listSymbole, nbSymboles);
	majTableSymboles(s);
	m_pileEtats.top()->transition(this, s);
}

void Automate::reduction()
{
	//cas où on cast un symbole en son parent
	Symbole *s = m_pileSymbole.top();
	m_pileSymbole.pop();
	s->castUp();

	Etat * tmp = m_pileEtats.top();
	m_pileEtats.pop();
	delete tmp;
	m_pileEtats.top()->transition(this, s);
}

void Automate::afficherProgramme()
{
	string tmp = *m_pileSymbole.top();
	cout << tmp;
}

SymboleTable *Automate::chercherSymbole(string key){
	ArbreSymboles::iterator it = m_aSymboles.find(key);
	if(it != m_aSymboles.end())	return it->second;

	return NULL;
}

void Automate::majTableSymboles(Symbole *s)
{
	string idTable = s->demanderId();
	SymboleTable *symbole = chercherSymbole(idTable);


	//if(idTable != "null"){

	const int typeS = (int)*s;
    if(typeS == LIGNEVAR)
    {
		if(symbole != NULL){
			//TODO : erreur : variable déjà déclarée.
			return;
		}
		//Ajout de la déclaration dans la table.
		SymboleTable *st = creerDeclaration();
        m_aSymboles[idTable] = st;
	}
	else if(typeS == LIGNECONST)
	{
		if(symbole != NULL){
			//TODO : erreur : constante déjà définie.
			return;
		}
		//Ajout de la définition de constante la table.
        SymboleTable *st = ((LigneConst*)s)->construireSymboleTable();
        m_aSymboles[idTable] = st;
	}
	else if(typeS == AFFECTATION)
	{
        /*
         * TODO :
         * 	(DONE) au moins une variable partie droite de affectation non affectée (chercher dans la table)
         *	(DONE) variable partie gauche est une constante
         * 	(DONE) une des deux variables n'a pas été déclarée
         */
         if(symbole == NULL){
			//TODO : erreur : la variable n'a pas été déclarée.
			m_aSymboles[idTable] = creerDeclaration();
			return;
         }
         if(symbole->m_constante){
			//TODO : erreur : une constante ne peut pas être modifiée
			return;
         }

         Affectation *aff = (Affectation*)s;
         vector<string> identificateurs;
         aff->remplirIdsExpression(identificateurs);

         if(!verifierIdentificateurs(identificateurs)) return;


         //Si on arrive ici, alors l'affectation peut avoir lieu.
         //TODO : comment on calcule la valeur d'une expression ?


	}
	else if(typeS == ECRITURE)
	{
		/*
		 * TODO :
		 * 	la variable à écrire n'a pas été déclarée ou affectée.
		 */
		 Ecriture *ecr = (Ecriture*)s;
         vector<string> identificateurs;
         ecr->remplirIdsExpression(identificateurs);

         if(!verifierIdentificateurs(identificateurs)) return;

         //Si on arrive ici, alors l'écriture peut avoir lieu.
         //TODO : comment on calcule la valeur d'une expression ?
	}
	else if(typeS == LECTURE)
	{
		if(symbole == NULL){
			//TODO : erreur : la variable n'a pas été déclarée.
			return;
		}
	}
}

bool Automate::verifierIdentificateurs(vector<string> identificateurs){
	for(int i=0; i<identificateurs.size() ; i++){
		ArbreSymboles::iterator it = m_aSymboles.find(identificateurs[i]);

		if(it==m_aSymboles.end()){
			//TODO : erreur : variable n'a pas été déclarée.
			return false;
		}
		if(!it->second->m_affectee){
			//TODO : erreur : variable utilisée sans être affectée
			return false;
		}
	}
	return true;
}


SymboleTable *Automate::creerDeclaration(){
	return new SymboleTable(0,true,false,false,false,false);
}
