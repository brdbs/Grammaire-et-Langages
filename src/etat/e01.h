#ifndef E01_H
#define E01_H
#include "etat.h"

class E01 : public Etat
{
public:
	E01();
	virtual void transition(Automate &automate, Symbole *s); //goNext()
	virtual ~E01(){}
};

#endif
