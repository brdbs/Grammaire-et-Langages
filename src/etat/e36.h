#ifndef E36_H
#define E36_H
#include "etat.h"

class E36 : public Etat
{
public:
	E36();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E36(){}
};

#endif
