#ifndef E09_H
#define E09_H
#include "etat.h"

class Automate;
class Symbole;

class E09 : public Etat
{
public:
	E09();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E09(){}
};

#endif
