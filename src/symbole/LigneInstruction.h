#ifndef BLOCINSTRUCTION_H
#define BLOCINSTRUCTION_H

#include "Symbole.h"

class LigneInstruction : public Symbole
{
	public:
		LigneInstruction();
		virtual ~LigneInstruction();
		virtual void interpreter()=0;
	protected:
	private:
};

#endif // BLOCINSTRUCTION_H
