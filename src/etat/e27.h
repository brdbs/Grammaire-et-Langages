#ifndef E27_H
#define E27_H
#include "etat.h"

class Automate;
class Symbole;

class E27 : public Etat
{
public:
	E27();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E27(){}
};

#endif
