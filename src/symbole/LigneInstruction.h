#ifndef LIGNEINSTRUCTION_H
#define LIGNEINSTRUCTION_H

#include "Symbole.h"


class LigneInstruction : public Symbole
{
	public:
		LigneInstruction();
		virtual ~LigneInstruction();
	protected:
	private:
		LigneInstruction * m_preveInstruction;
};

#endif // LIGNEINSTRUCTION_H
