#ifndef MULT_H
#define MULT_H

#include <string>
#include "Symbole.h"


class Mult : public Symbole
{
	public:
		Mult();
		virtual ~Mult();
		virtual bool estTerminal(){return true;}
		virtual void castUp(){ m_idSymbole = OPERATEURMUL; }
		virtual operator std::string() const{ return "*"; }
	protected:
	private:
};

#endif // MULT_H
