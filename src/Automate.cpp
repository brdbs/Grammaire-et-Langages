
#include "Automate.h"
#include "etat/etat.h"
#include "etat/e00.h"
#include "symbole/LigneDeclaration.h"

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

void Automate::majTableSymboles(Symbole *s)
{
	string idTable = s->demanderId();
	if(idTable == "null")	return;

	SymboleTable *symbole = NULL;
	ArbreSymboles::iterator it = m_aSymboles.find(idTable);
	if(it != m_aSymboles.end())	symbole = it->second;

	const int typeS = (int)*s;
    if(typeS == LIGNEVAR){
		if(symbole != NULL){
			//TODO : erreur : variable déjà déclarée.
			return;
		}
		//Ajout de la déclaration dans la table.
		SymboleTable *st = new SymboleTable(NULL,true,false,false,false);
        m_aSymboles[idTable] = st;
	}
	else if(typeS == LIGNECONST){
		if(symbole != NULL){
			//TODO : erreur : constante déjà définie.
			return;
		}
		//Ajout de la définition de constante la table.
		SymboleTable *st = new SymboleTable(0,true,false,false,true);
        m_aSymboles[idTable] = st;
	}
	else if(typeS == AFFECTATION){
        /*
         * TODO :
         * 	variable partie droite de affectation non affectée (chercher dans la table)
         *	variable partie gauche est une constante
         * 	une des deux variables n'a pas été déclarée
         */
	}
	else if(typeS == ECRITURE){
		/*
		 * TODO :
		 * 	la variable à écrire est une constante ou n'a pas été déclarée.
		 */
	}
	else if(typeS == LECTURE){
		if(symbole == NULL){
			//TODO : erreur : la variable n'a pas été déclarée.
			return;
		}
	}
}
