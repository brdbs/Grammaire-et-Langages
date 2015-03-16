#ifndef E30_H
#define E30_H
#include "etat.h"

class Automate;
class Symbole;

class E30 : public Etat
{
public:
	E30();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E30(){}
};

#endif
