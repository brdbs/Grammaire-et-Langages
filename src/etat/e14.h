#ifndef E14_H
#define E14_H
#include "etat.h"

class E14 : public Etat
{
public:
	E14();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E14(){}
};

#endif
