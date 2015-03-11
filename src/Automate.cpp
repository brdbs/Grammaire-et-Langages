#include "Automate.h"
#include "etat/etat.h"
#include "etat/e00.h"

#include <iostream>
#include <fstream>

using namespace std;

Automate::Automate(string cheminFichier)
{
    ifstream fichier(cheminFichier.c_str(), ifstream::ate);
    if (fichier.is_open())
	{
		int tailleFichier = (int) fichier.tellg();
		fichier.seekg(0, ios_base::beg);

		char *buf = new char[tailleFichier];
		fichier.read(buf,tailleFichier);
		m_programme.append(buf, tailleFichier);

		delete buf;
		fichier.close();
	}
	else
	{
		cout << "Erreur à l'ouverture de " << cheminFichier << endl;
	}
}

Automate::~Automate()
{
    //dtor
}

void Automate::lecture()
{
	//envoyer le programme au lexer 
	//m_currentSymbole = lexer.nextSymbole()
	m_pileEtats.push(new E00());
	while (!m_pileEtats.top()->isFinal())
	{
		m_pileEtats.top()->transition(this, m_currentSymbole);
	}
}

void Automate::decalage(Symbole *s, Etat *e){
    m_pileSymbole.push(s);
    m_pileEtats.push(e);

	//m_currentSymbole = m_lexer.getNext
    //TODO
}

Symbole** Automate::reduction(Symbole* s, int nbSymboles)
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
	m_pileEtats.top()->transition(this, s);
	return listSymbole;
}