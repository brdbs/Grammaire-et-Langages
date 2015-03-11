#ifndef E17_H
#define E17_H
#include "etat.h"

class E17 : public Etat
{
public:
	E17();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E17(){}
};

#endif
