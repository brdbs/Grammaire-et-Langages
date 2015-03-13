#ifndef E37_H
#define E37_H
#include "etat.h"

class E37 : public Etat
{
public:
	E37();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E37(){}
};

#endif
