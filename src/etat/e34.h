#ifndef E34_H
#define E34_H
#include "etat.h"

class Automate;
class Symbole;

class E34 : public Etat
{
public:
	E34();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E34(){}
};

#endif
