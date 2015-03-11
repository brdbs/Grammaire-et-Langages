#ifndef E07_H
#define E07_H
#include "etat.h"

class E07 : public Etat
{
public:
	E07();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E07(){}
};

#endif
