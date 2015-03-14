#ifndef E31_H
#define E31_H
#include "etat.h"

class E31 : public Etat
{
public:
	E31();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E31(){}
};

#endif
