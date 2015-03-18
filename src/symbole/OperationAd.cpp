#include <sstream>
#include "OperationAd.h"

using namespace std;
OperationAd::OperationAd()
{
	m_idSymbole = EXPRESSION;
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