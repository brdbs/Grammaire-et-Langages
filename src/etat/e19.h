#ifndef E19_H
#define E19_H
#include "etat.h"

class E19 : public Etat
{
public:
	E19();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E19(){}
};

#endif
