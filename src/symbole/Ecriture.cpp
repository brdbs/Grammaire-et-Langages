#include <sstream>
#include "Ecriture.h"

using namespace std;
Ecriture::Ecriture()
{
	m_idSymbole = ECRITURE;
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
	ss << "ecrire " << s << ";"<< endl;
	return ss.str();

}