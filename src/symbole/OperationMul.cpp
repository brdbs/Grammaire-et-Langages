#include <sstream>
#include "OperationMul.h"

using namespace std;

OperationMul::OperationMul()
{
	//ctor
}

OperationMul::~OperationMul()
{
	//dtor
}

OperationMul::operator std::string() const
{
	stringstream ss;
	string terme = *m_terme;
	string facteur = *m_facteur;

	ss << terme << m_op << m_facteur;
	return ss.str();
}