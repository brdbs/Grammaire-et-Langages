#include <sstream>
#include "OperationAd.h"

using namespace std;
OperationAd::OperationAd()
{
	//ctor
}

OperationAd::~OperationAd()
{
	//dtor
}

OperationAd::operator std::string() const
{
	stringstream ss;
	string exp= *m_expression;
	string terme = *m_terme;
	ss << exp << m_opA << terme;

	return ss.str();
}