#ifndef E21_H
#define E21_H
#include "etat.h"

class Automate;
class Symbole;

class E21 : public Etat
{
public:
	E21();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E21(){}
};

#endif
