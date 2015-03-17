#ifndef PLUS_H
#define PLUS_H

#include <string>
#include "Symbole.h"


class Plus : public Symbole
{
	public:
		Plus();
		virtual ~Plus();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return "+"; }
		virtual void castUp(){ m_idSymbole = OPERATEURAD; }
	protected:
	private:
};

#endif // PLUS_H
