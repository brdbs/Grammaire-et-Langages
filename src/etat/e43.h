#ifndef E43_H
#define E43_H
#include "etat.h"

class E43 : public Etat
{
public:
	E43();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E43(){}
};

#endif
