#ifndef TERME_H
#define TERME_H

#include "Expression.h"


class Terme : public Expression
{
	public:
		Terme();
		virtual ~Terme();
		virtual void castUp(){ m_idSymbole = EXPRESSION; }
		virtual int calculer() = 0;
		virtual int* evaluer(Automate *automate) = 0;
	protected:
	private:
};

#endif // TERME_H
