#ifndef MULT_H
#define MULT_H

#include "Symbole.h"


class Mult : public Symbole
{
	public:
		Mult();
		virtual ~Mult();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // MULT_H
