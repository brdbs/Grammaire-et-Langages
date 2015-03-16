#ifndef PLUS_H
#define PLUS_H

#include "Symbole.h"


class Plus : public Symbole
{
	public:
		Plus();
		virtual ~Plus();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // PLUS_H
