#ifndef E08_H
#define E08_H
#include "etat.h"

class E08 : public Etat
{
public:
	E08();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E08(){}
};

#endif
