#ifndef E35_H
#define E35_H
#include "etat.h"

class E35 : public Etat
{
public:
	E35();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E35(){}
};

#endif
