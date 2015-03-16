#ifndef NOMBRE_H
#define NOMBRE_H

#include "Facteur.h"


class Nombre : public Facteur
{
	public:
		Nombre();
		virtual ~Nombre();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // NOMBRE_H
