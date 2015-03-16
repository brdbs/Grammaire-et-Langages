#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
#include "Symbole.h"


class Expression : public Symbole
{
	public:
		Expression();
		virtual ~Expression(); 
		virtual void castUp(){ m_id = EXPRESSION; }
	protected:
	private:
};

#endif // EXPRESSION_H
