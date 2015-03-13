#ifndef E22_H
#define E22_H
#include "etat.h"

class E22 : public Etat
{
public:
	E22();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E22(){}
};

#endif
