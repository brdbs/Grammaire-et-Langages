#ifndef VAR_H
#define VAR_H

#include "Symbole.h"


class Var : public Symbole
{
	public:
		Var();
		virtual ~Var();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // VAR_H
