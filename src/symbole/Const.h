#ifndef CONST_H
#define CONST_H

#include <string>
#include "Symbole.h"


class Const : public Symbole
{
	public:
		Const();
		virtual ~Const();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "const"; }
	protected:
	private:
};

#endif // CONST_H
