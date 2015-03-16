#ifndef ECRIRE_H
#define ECRIRE_H

#include <string>
#include "Symbole.h"
#include "Expression.h"


class Ecrire : public Symbole
{
	public:
		Ecrire();
		virtual ~Ecrire();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "ecrire"; }
	protected:
	private:
		
		
};

#endif // ECRIRE_H
