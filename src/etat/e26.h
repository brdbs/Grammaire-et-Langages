#ifndef E26_H
#define E26_H
#include "etat.h"

class E26 : public Etat
{
public:
	E26();
	virtual void transition(); //goNext()
	virtual ~E26(){}
};

#endif
