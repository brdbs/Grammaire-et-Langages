#include <sstream>
#include "Programme.h"

using namespace std;
Programme::Programme()
{
	//ctor
}

Programme::~Programme()
{
	//dtor
}

Programme::operator std::string() const
{
	stringstream ss; 
	string dec = *m_blocDec;
	string inst = *m_blocInst;
	ss << m_blocDec << endl << m_blocInst << endl;
	return ss.str();
}