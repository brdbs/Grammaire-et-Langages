#ifndef E29_H
#define E29_H
#include "etat.h"

class E29 : public Etat
{
public:
	E29();
	virtual void transition(); //goNext()
	virtual ~E29(){}
};

#endif