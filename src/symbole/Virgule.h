#ifndef VIRGULE_H
#define VIRGULE_H

#include <string>
#include "Symbole.h"


class Virgule : public Symbole
{
	public:
		Virgule();
		virtual ~Virgule();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return ","; }
	protected:
	private:
};

#endif // VIRGULE_H
