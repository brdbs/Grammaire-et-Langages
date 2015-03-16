#ifndef EGAL_H
#define EGAL_H

#include "Symbole.h"


class Egal : public Symbole
{
	public:
		Egal();
		virtual ~Egal();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // EGAL_H
