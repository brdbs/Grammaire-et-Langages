#ifndef E11_H
#define E11_H
#include "etat.h"

class Automate;
class Symbole;

class E11 : public Etat
{
public:
	E11();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E11(){}
};

#endif
