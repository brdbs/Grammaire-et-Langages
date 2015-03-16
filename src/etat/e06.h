#ifndef E06_H
#define E06_H
#include "etat.h"

class Automate;
class Symbole;

class E06 : public Etat
{
public:
	E06();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E06(){}
};

#endif
