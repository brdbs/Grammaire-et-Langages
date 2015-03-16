#ifndef E05_H
#define E05_H
#include "etat.h"

class Automate;
class Symbole;

class E05 : public Etat
{
public:
	E05();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E05(){}
};

#endif
