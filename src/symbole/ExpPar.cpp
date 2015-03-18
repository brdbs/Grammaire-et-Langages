#include <sstream>
#include "ExpPar.h"

using namespace std;
ExpPar::ExpPar()
{
	m_idSymbole = EXPPAR;
}

ExpPar::~ExpPar()
{
	delete m_expression;
}

ExpPar::operator std::string() const
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
	ss << "(" << tmp << ")" << endl;
	return ss.str();

}