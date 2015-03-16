#ifndef E16_H
#define E16_H
#include "etat.h"

class Automate;
class Symbole;

class E16 : public Etat
{
public:
	E16();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E16(){}
};

#endif
