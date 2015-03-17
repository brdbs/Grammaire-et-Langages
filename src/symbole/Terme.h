#ifndef TERME_H
#define TERME_H

#include "Expression.h"


class Terme : public Expression
{
	public:
		Terme();
		virtual ~Terme();
		virtual void castUp(){ m_idSymbole = TERME; }
	protected:
	private:
};

#endif // TERME_H
