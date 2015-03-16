#ifndef E23_H
#define E23_H
#include "etat.h"

class E23 : public Etat
{
public:
	E23();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E23(){}
};

#endif
