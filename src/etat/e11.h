#ifndef E11_H
#define E11_H
#include "etat.h"

class E11 : public Etat
{
public:
	E11();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E11(){}
};

#endif
