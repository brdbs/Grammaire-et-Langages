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
		terme = *m_terme;
	}
	else
	{
		terme = "";
	}
	string facteur;
	if (m_facteur!=NULL)
	{
		facteur = *m_facteur;
	}
	else
	{
		facteur = "";
	}
	ss << terme << m_op << m_facteur;
	return ss.str();
}