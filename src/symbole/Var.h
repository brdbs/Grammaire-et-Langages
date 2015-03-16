#ifndef VAR_H
#define VAR_H

#include <string>
#include "Symbole.h"


class Var : public Symbole
{
	public:
		Var();
		virtual ~Var();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "var"; }
	protected:
	private:
};

#endif // VAR_H
