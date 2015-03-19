#include <sstream>
#include "OperationMul.h"

using namespace std;

OperationMul::OperationMul()
{
	m_idSymbole = TERME;
}

OperationMul::~OperationMul()
{
	delete m_facteur;
	delete m_terme;
}

OperationMul::operator std::string() const
{
	stringstream ss;
	string terme;
	if (m_terme != NULL)
	{
		terme = (string)*m_terme;
	}
	else
	{
		terme = "";
	}
	string facteur;
	if (m_facteur!=NULL)
	{
		facteur = (string)*m_facteur;
	}
	else
	{
		facteur = "";
	}
	ss << terme << m_op << m_facteur;
	return ss.str();
}

void OperationMul::initialiser(Symbole **liste, int taille)
{
	if(taille==3){
		//On vient de E17
		//liste : [T,OP,F]
		m_terme = (Terme*)liste[0];
		m_op = (string)*(Symbole*)liste[1];
		m_facteur = (Facteur*)liste[2];

		delete liste[1];
	}
}
