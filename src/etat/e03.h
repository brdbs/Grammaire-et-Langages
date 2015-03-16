#ifndef E03_H
#define E03_H
#include "etat.h"

class Automate;
class Symbole;

class E03 : public Etat
{
public:
	E03();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E03(){}
};

#endif
