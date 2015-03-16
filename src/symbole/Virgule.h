#ifndef VIRGULE_H
#define VIRGULE_H

#include "Symbole.h"


class Virgule : public Symbole
{
	public:
		Virgule();
		virtual ~Virgule();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // VIRGULE_H
