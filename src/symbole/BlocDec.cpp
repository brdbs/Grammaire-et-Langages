#include <sstream>
#include "BlocDec.h"

using namespace std;
BlocDec::BlocDec()
{
	//ctor
}

BlocDec::~BlocDec()
{
	//dtor
}

BlocDec::operator std::string() const
{
	stringstream ss;
	string prev = *m_prevDec;
	string current = *m_currentLine;
	ss << prev << current << endl;
	return ss.str();
}