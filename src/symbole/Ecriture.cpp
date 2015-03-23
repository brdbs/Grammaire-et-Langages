#include <iostream>
#include <sstream>
#include "Ecriture.h"


using namespace std;
Ecriture::Ecriture()
{
	m_idSymbole = ECRITURE;
	m_expression = NULL;
}

Ecriture::~Ecriture()
{
	delete m_expression;
}

Ecriture::operator std::string() const
{
	stringstream ss;
	string s;
	if (m_expression != NULL)
	{
		s = (string)*m_expression;
	}
	else
	{
		s = "";
	}
	ss << "ecrire " << s << ";";
	return ss.str();

}

void Ecriture::interpreter(Automate *automate)
{
	cout << m_expression->calculer(automate);
}