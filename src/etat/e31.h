#ifndef E31_H
#define E31_H
#include "etat.h"

class E31 : public Etat
{
public:
	E31();
	virtual void transition(); //goNext()
	virtual ~E31(){}
};

#endif
