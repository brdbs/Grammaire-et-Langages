#ifndef ECRITURE_H
#define ECRITURE_H

#include "LigneInstruction.h"
#include "Expression.h"


class Ecriture : public LigneInstruction
{
	public:
		Ecriture();
		virtual ~Ecriture();
	protected:
	private:
		Expression* m_expression;
};

#endif // ECRITURE_H
