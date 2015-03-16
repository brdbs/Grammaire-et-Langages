#include <sstream>
#include "Ecriture.h"

using namespace std;
Ecriture::Ecriture()
{
	//ctor
}

Ecriture::~Ecriture()
{
	//dtor
}

Ecriture::operator std::string() const
{
	stringstream ss;
	string s = *m_expression;
	ss << "ecrire " << s << ";"<< endl;
	return ss.str();

}