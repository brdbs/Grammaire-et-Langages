#ifndef E41_H
#define E41_H
#include "etat.h"

class E41 : public Etat
{
public:
	E41();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E41(){}
};

#endif
