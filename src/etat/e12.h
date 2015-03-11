#ifndef E12_H
#define E12_H
#include "etat.h"

class E12 : public Etat
{
public:
	E12();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E12(){}
};

#endif
