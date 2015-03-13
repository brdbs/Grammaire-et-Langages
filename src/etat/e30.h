#ifndef E30_H
#define E30_H
#include "etat.h"

class E30 : public Etat
{
public:
	E30();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E30(){}
};

#endif
