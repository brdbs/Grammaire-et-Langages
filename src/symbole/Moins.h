#ifndef MOINS_H
#define MOINS_H

#include <string>
#include "Symbole.h"


class Moins : public Symbole
{
	public:
		Moins();
		virtual ~Moins();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "-"; }
		virtual void castUp(){ m_idSymbole = OPERATEURAD; }
	protected:
	private:
};

#endif // MOINS_H
