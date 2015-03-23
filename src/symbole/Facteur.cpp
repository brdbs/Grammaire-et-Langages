#include "Facteur.h"

Facteur::Facteur()
{
	m_idSymbole = FACTEUR;
}

Facteur::~Facteur()
{
	//dtor
}

void Facteur::castUp()
{
	switch (m_idSymbole)
	{	
	case FACTEUR:
		m_idSymbole = TERME;
		break;
	case TERME:
		m_idSymbole = EXPRESSION;
		break;
	default:
		m_idSymbole = FACTEUR;
		break;
	}
}