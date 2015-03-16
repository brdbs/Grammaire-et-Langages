#include <sstream>
#include "ExpPar.h"

using namespace std;
ExpPar::ExpPar()
{
	//ctor
}

ExpPar::~ExpPar()
{
	//dtor
}

ExpPar::operator std::string() const
{
	stringstream ss;
	string tmp = *m_expression;
	ss << "(" << tmp << ")" << endl;
	return ss.str();

}