#ifndef LIRE_H
#define LIRE_H

#include "Symbole.h"


class Lire : public Symbole
{
	public:
		Lire();
		virtual ~Lire();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // LIRE_H
