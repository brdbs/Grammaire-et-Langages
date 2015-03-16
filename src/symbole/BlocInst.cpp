#include <sstream>
#include "BlocInst.h"
using namespace std;

BlocInst::BlocInst(LigneInstruction *instruction) : m_currentLine(instruction)
{
	//ctor
}

BlocInst::~BlocInst()
{
	//dtor
}

BlocInst::operator std::string() const
{
	stringstream ss;
	string prev = *m_prevInst;
	string current = *m_currentLine;
	ss << prev << current << endl;
	return ss.str();
}