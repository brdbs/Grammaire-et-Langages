#ifndef ECRITURE_H
#define ECRITURE_H

#include <string>
#include "LigneInstruction.h"
#include "Expression.h"


class Ecriture : public LigneInstruction
{
	public:
		Ecriture();
		virtual ~Ecriture();
		virtual operator std::string() const;
		void determinerExpr(Expression *exp){m_expression=exp;}
	protected:
	private:
		Expression* m_expression;
};

#endif // ECRITURE_H
