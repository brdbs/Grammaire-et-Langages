#ifndef DIV_H
#define DIV_H

#include "Symbole.h"


class Div : public Symbole
{
	public:
		Div();
		virtual ~Div();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // DIV_H
