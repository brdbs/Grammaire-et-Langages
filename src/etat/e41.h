#ifndef E41_H
#define E41_H
#include "etat.h"

class Automate;
class Symbole;

class E41 : public Etat
{
public:
	E41();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E41(){}
};

#endif
