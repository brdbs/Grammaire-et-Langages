#ifndef E15_H
#define E15_H
#include "etat.h"

class E15 : public Etat
{
public:
	E15();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E15(){}
};

#endif
