#include <sstream>
#include "Affectation.h"
#include "../Automate.h"

using namespace std;
Affectation::Affectation() {
	m_idSymbole = AFFECTATION;
	m_expression = NULL;
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
	ss << m_id << " := " << tmp << ";";
	return ss.str();
}

void Affectation::interpreter(Automate *automate)
{
	SymboleTable * s = automate->chercherSymbole(m_id);
	s->m_valeur = m_expression->calculer(automate);
}
