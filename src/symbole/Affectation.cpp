#include "Affectation.h"
#include <sstream>

using namespace std;
Affectation::Affectation() {
	m_idSymbole = AFFECTATION;
}

Affectation::~Affectation()
{
	delete m_expression;
}

Affectation::operator std::string() const
{
	stringstream ss; 
	string tmp;
	if (m_expression != NULL)
	{
		tmp = (string)*m_expression;
	}
	else
	{
		tmp = "";
	}
	ss << m_id << " := " << tmp << ";"<<endl;
	return ss.str();
}