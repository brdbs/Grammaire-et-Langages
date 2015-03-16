#ifndef E37_H
#define E37_H
#include "etat.h"

class Automate;
class Symbole;

class E37 : public Etat
{
public:
	E37();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E37(){}
};

#endif
