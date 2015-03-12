#include "Automate.h"
#include "etat/etat.h"
#include "etat/e00.h"
#include "symbole/LigneDeclaration.h"

using namespace std;

Automate::Automate(string cheminFichier)
{
	m_lexer.scannerFichier(cheminFichier);

    //On considère le premier caractère rencontré comme une déclaration.
	m_currentSymbole = new LigneDeclaration();
}

Automate::~Automate()
{
    delete m_currentSymbole;
}

void Automate::lecture()
{
	//TODO : envoyer le programme au lexer
	m_pileEtats.push(new E00());
	while (!m_pileEtats.top()->isFinal())
	{
		//m_currentSymbole = lexer.nextSymbole()
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
