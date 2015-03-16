#ifndef OPERATIONAD_H
#define OPERATIONAD_H

#include "Expression.h"
#include "Terme.h"


class OperationAd : public Expression
{
	public:
		OperationAd();
		virtual ~OperationAd();
	protected:
	private:
		Expression * m_expression;
		int m_opA;
		Terme * m_terme;

};

#endif // OPERATIONAD_H
