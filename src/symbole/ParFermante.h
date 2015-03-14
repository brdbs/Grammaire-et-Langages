#ifndef PARFERMANTE_H
#define PARFERMANTE_H

#include "Symbole.h"


class ParFermante : public Symbole
{
	public:
		ParFermante();
		virtual ~ParFermante();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // PARFERMANTE_H
