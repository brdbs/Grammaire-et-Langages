#ifndef E10_H
#define E10_H
#include "etat.h"

class Automate;
class Symbole;

class E10 : public Etat
{
public:
	E10();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E10(){}
};

#endif
