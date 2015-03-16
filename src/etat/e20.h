#ifndef E20_H
#define E20_H
#include "etat.h"

class Automate;
class Symbole;

class E20 : public Etat
{
public:
	E20();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E20(){}
};

#endif
