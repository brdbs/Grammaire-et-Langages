#ifndef ECRIRE_H
#define ECRIRE_H

#include "Symbole.h"
#include "Expression.h"


class Ecrire : public Symbole
{
	public:
		Ecrire();
		virtual ~Ecrire();
		virtual bool estTerminal(){return true;}
	protected:
	private:
		
		
};

#endif // ECRIRE_H
