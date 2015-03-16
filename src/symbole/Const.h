#ifndef CONST_H
#define CONST_H

#include "Symbole.h"


class Const : public Symbole
{
	public:
		Const();
		virtual ~Const();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // CONST_H
