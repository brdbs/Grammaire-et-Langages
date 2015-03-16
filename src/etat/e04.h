#ifndef E04_H
#define E04_H
#include "etat.h"

class Automate;
class Symbole;

class E04 : public Etat
{
public:
	E04();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E04(){}
};

#endif
