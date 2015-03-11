#ifndef E34_H
#define E34_H
#include "etat.h"

class E34 : public Etat
{
public:
	E34();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E34(){}
};

#endif
