#ifndef E18_H
#define E18_H
#include "etat.h"

class Automate;
class Symbole;

class E18 : public Etat
{
public:
	E18();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E18(){}
};

#endif
