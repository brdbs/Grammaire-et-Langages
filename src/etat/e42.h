#ifndef E42_H
#define E42_H
#include "etat.h"

class E42 : public Etat
{
public:
	E42();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E42(){}
};

#endif
