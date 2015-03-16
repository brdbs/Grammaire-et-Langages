#ifndef PAROUVRANTE_H
#define PAROUVRANTE_H

#include "Symbole.h"


class ParOuvrante : public Symbole
{
	public:
		ParOuvrante();
		virtual ~ParOuvrante();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // PAROUVRANTE_H
