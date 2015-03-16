#ifndef E32_H
#define E32_H
#include "etat.h"

class E32 : public Etat
{
public:
	E32();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E32(){}
};

#endif
