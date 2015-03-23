#include <sstream>
#include "ExpPar.h"

using namespace std;
ExpPar::ExpPar()
{
	m_idSymbole = FACTEUR;
}

ExpPar::~ExpPar()
{
	delete m_expression;
}

ExpPar::operator std::string() const
{
	stringstream ss;
	string tmp;
	if (m_expression != NULL)
	{
		tmp = (string)*m_expression;
	}
	else
	{
		tmp = "";
	}
	ss << "(" << tmp << ")";
	return ss.str();

}

void ExpPar::initialiser(Symbole **liste, int taille){
    if(taille==3){
		//On vient de E26
		//liste : [(,E,)]
		m_expression = (Expression*)liste[1];

		delete liste[0];
		delete liste[2];
    }
}
