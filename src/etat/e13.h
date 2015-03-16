#ifndef E13_H
#define E13_H
#include "etat.h"

class Automate;
class Symbole;

class E13 : public Etat
{
public:
	E13();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E13(){}
};

#endif
