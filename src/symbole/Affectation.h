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
	protected:
	private:
		std::string m_id;
		Expression* m_expression;
};

#endif // AFFECTATION_H
