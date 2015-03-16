#ifndef EXPPAR_H
#define EXPPAR_H

#include <string>
#include "Facteur.h"


class ExpPar : public Facteur
{
	public:
		ExpPar();
		virtual ~ExpPar();
		virtual operator std::string() const;
	protected:
	private:
		Expression* m_expression;
};

#endif // EXPPAR_H
