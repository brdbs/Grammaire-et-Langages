#ifndef EXPPAR_H
#define EXPPAR_H

#include "Facteur.h"


class ExpPar : public Facteur
{
	public:
		ExpPar();
		virtual ~ExpPar();
	protected:
	private:
		Expression* m_expression;
};

#endif // EXPPAR_H
