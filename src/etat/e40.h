#ifndef E40_H
#define E40_H
#include "etat.h"

class E40 : public Etat
{
public:
	E40();
	virtual void transition(); //goNext()
	virtual ~E40(){}
};

#endif
