#include "Automate.h"
#include "etat/etat.h"
#include "etat/e00.h"
#include "symbole/LigneDeclaration.h"

using namespace std;

Automate::Automate(string cheminFichier) : m_lexer(cheminFichier)
{
	
}

Automate::~Automate()
{
}

void Automate::lecture()
{
	m_pileEtats.push(new E00());
	while (!m_pileEtats.top()->isFinal())
	{
		m_pileEtats.top()->transition(this, new LigneDeclaration());
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
