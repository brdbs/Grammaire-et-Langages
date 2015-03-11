#ifndef E05_H
#define E05_H
#include "etat.h"

class E05 : public Etat
{
public:
	E05();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E05(){}
};

#endif
