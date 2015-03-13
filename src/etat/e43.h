#ifndef E43_H
#define E43_H
#include "etat.h"

class E43 : public Etat
{
public:
	E43();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E43(){}
};

#endif
