#ifndef E12_H
#define E12_H
#include "etat.h"

class Automate;
class Symbole;

class E12 : public Etat
{
public:
	E12();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E12(){}
};

#endif
