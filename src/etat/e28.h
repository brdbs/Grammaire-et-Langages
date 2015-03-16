#ifndef E28_H
#define E28_H
#include "etat.h"

class Automate;
class Symbole;

class E28 : public Etat
{
public:
	E28();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E28(){}
};

#endif
