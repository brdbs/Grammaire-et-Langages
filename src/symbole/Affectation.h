#ifndef AFFECTATION_H
#define AFFECTATION_H


#include <string>
#include "LigneInstruction.h"
#include "Expression.h"


class Affectation : public LigneInstruction
{
	public:
		Affectation();
		virtual ~Affectation();
		virtual operator std::string() const;
		void determinerExpr(Expression *expr){m_expression = expr;}
		void determinerId(std::string id){m_id = id;}
	protected:
	private:
		std::string m_id;
		Expression* m_expression;
};

#endif // AFFECTATION_H
