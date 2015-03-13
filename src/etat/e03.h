#ifndef E03_H
#define E03_H
#include "etat.h"

class E03 : public Etat
{
public:
	E03();
	virtual void transition(Automate* automate); //goNext()
	virtual ~E03(){}
};

#endif
