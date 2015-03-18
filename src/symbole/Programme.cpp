#include <sstream>
#include "Programme.h"

using namespace std;
Programme::Programme()
{
	m_idSymbole = PROGRAMME;
}

Programme::~Programme()
{
	delete m_blocDec;
	delete m_blocInst;
}

Programme::operator std::string() const
{
	stringstream ss; 
	string dec;
	if (m_blocDec != NULL)
	{
		dec = (string)*m_blocDec;
	}
	else
	{
		dec = "";
	}
	string inst;
	if (m_blocInst != NULL)
	{
		inst = (string)*m_blocInst;
	}
	else
	{
		inst = "";
	}
	ss << m_blocDec << endl << m_blocInst << endl;
	return ss.str();
}