#ifndef E35_H
#define E35_H
#include "etat.h"

class Automate;
class Symbole;

class E35 : public Etat
{
public:
	E35();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E35(){}
};

#endif
