#ifndef E18_H
#define E18_H
#include "etat.h"

class E18 : public Etat
{
public:
	E18();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E18(){}
};

#endif
