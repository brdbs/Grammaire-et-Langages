#ifndef IDENTIFICATEUR_H
#define IDENTIFICATEUR_H

#include "Facteur.h"


class Identificateur : public Facteur
{
	public:
		Identificateur();
		virtual ~Identificateur();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // IDENTIFICATEUR_H
