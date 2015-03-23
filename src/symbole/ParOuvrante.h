#ifndef PAROUVRANTE_H
#define PAROUVRANTE_H

#include <string>
#include "Symbole.h"


class ParOuvrante : public Symbole
{
	public:
		ParOuvrante();
		virtual ~ParOuvrante();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "("; }
	protected:
	private:
};

#endif // PAROUVRANTE_H
