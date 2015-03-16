#ifndef E25_H
#define E25_H
#include "etat.h"

class Automate;
class Symbole;

class E25 : public Etat
{
public:
	E25();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E25(){}
};

#endif
