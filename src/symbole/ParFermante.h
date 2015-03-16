#ifndef PARFERMANTE_H
#define PARFERMANTE_H

#include <string>
#include "Symbole.h"


class ParFermante : public Symbole
{
	public:
		ParFermante();
		virtual ~ParFermante();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return ")"; }
	protected:
	private:
};

#endif // PARFERMANTE_H
