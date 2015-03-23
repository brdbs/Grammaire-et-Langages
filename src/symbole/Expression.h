#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "Symbole.h"

#include <vector>
using namespace std;

class Expression : public Symbole
{
	public:
		Expression();
		virtual ~Expression();
		virtual void castUp(){ m_idSymbole = EXPRESSION; }
		virtual void remplirIdsExpression(vector<string> ids){}
	protected:
	private:
};

#endif // EXPRESSION_H
