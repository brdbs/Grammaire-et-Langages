#ifndef OPERATIONMUL_H
#define OPERATIONMUL_H

#include "Terme.h"
#include "Facteur.h"


class OperationMul : public Terme
{
	public:
		OperationMul();
		virtual ~OperationMul();
	protected:
	private:
		Terme * m_terme;
		bool m_isMult;
		Facteur * m_facteur;
};

#endif // OPERATIONMUL_H
