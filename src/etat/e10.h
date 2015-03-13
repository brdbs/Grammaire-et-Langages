#ifndef E10_H
#define E10_H
#include "etat.h"

class E10 : public Etat
{
public:
	E10();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E10(){}
};

#endif
