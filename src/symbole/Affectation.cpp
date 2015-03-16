#include "Affectation.h"
#include <sstream>

using namespace std;
Affectation::Affectation()
{
	//ctor
}

Affectation::~Affectation()
{
	//dtor
}

Affectation::operator std::string() const
{
	stringstream ss; 
	string tmp = *m_expression;
	ss << m_id << " := " << tmp << ";"<<endl;
	return ss.str();
}