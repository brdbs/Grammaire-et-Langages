#ifndef EGAL_H
#define EGAL_H

#include <string>
#include "Symbole.h"


class Egal : public Symbole
{
	public:
		Egal();
		virtual ~Egal();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "="; }
	protected:
	private:
};

#endif // EGAL_H
