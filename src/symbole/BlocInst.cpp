#include <sstream>
#include "BlocInst.h"
using namespace std;

BlocInst::BlocInst(LigneInstruction *instruction) : m_currentLine(instruction)
{
	m_idSymbole = BLOCINSTRUCTION; 
}

BlocInst::BlocInst() 
{
	m_idSymbole = BLOCINSTRUCTION;
}
BlocInst::~BlocInst()
{
	delete m_prevInst;
	delete m_currentLine;
}

BlocInst::operator std::string() const
{
	
	stringstream ss;
	string prev;
	if (m_prevInst != NULL)
	{
		prev = *m_prevInst;
	}
	else
	{
		prev = "";
	}
	string current;
	if (m_currentLine != NULL)
	{
		current = *m_currentLine;
	}
	else
	{
		current = "";
	}
	ss << prev << current << endl;
	return ss.str();
}

void BlocInst::initialiser(Symbole **, int taille)
{

}