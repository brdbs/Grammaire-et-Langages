#ifndef DIV_H
#define DIV_H

#include <string>
#include "Symbole.h"


class Div : public Symbole
{
	public:
		Div();
		virtual ~Div();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "/"; }
		virtual void castUp(){ m_idSymbole = OPERATEURMUL; }
	protected:
	private:
};

#endif // DIV_H
