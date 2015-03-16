#ifndef E38_H
#define E38_H
#include "etat.h"

class Automate;
class Symbole;

class E38 : public Etat
{
public:
	E38();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s){};
	virtual ~E38(){}
};

#endif
