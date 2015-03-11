#ifndef E25_H
#define E25_H
#include "etat.h"

class E25 : public Etat
{
public:
	E25();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E25(){}
};

#endif
