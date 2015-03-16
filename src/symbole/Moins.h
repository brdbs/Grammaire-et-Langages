#ifndef MOINS_H
#define MOINS_H

#include "Symbole.h"


class Moins : public Symbole
{
	public:
		Moins();
		virtual ~Moins();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // MOINS_H
