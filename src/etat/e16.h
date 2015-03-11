#ifndef E16_H
#define E16_H
#include "etat.h"

class E16 : public Etat
{
public:
	E16();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E16(){}
};

#endif
