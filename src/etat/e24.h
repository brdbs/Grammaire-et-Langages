#ifndef E24_H
#define E24_H
#include "etat.h"

class E24 : public Etat
{
public:
	E24();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E24(){}
};

#endif
