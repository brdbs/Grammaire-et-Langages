#ifndef E22_H
#define E22_H
#include "etat.h"

class Automate;
class Symbole;

class E22 : public Etat
{
public:
	E22();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E22(){}
};

#endif
