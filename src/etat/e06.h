#ifndef E06_H
#define E06_H
#include "etat.h"

class E06 : public Etat
{
public:
	E06();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E06(){}
};

#endif
