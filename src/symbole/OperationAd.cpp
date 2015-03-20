#include <sstream>
#include "OperationAd.h"

using namespace std;
OperationAd::OperationAd()
{
	m_idSymbole = EXPRESSION;
	m_expression = NULL;
	m_terme = NULL;
}

OperationAd::~OperationAd()
{
	delete m_expression;
	delete m_terme;
}

OperationAd::operator std::string() const
{
	stringstream ss;
	string exp;
	if (m_expression != NULL)
	{
		exp = (string)*m_expression;
	}
	else
	{
		exp = "";
	}
	string terme;
	if (m_terme != NULL)
	{
		terme = (string)*m_terme;
	}
	else
	{
		terme = "";
	}
	ss << exp << m_opA << terme;

	return ss.str();
}

void OperationAd::initialiser(Symbole **liste, int taille){
	if (taille == 3)
	{
		//On vient de E13
		//liste : [E,OpA,T]
		m_expression = (Expression*)liste[0];
		m_opA = (string)*liste[1];
		m_terme = (Terme*) liste[2];

		delete liste[1];
	}
}
