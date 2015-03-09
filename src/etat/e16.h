#ifndef E16_H
#define E16_H
#include "etat.h"

class E16 : public Etat
{
public:
	E16();
	virtual void transition(); //goNext()
	virtual ~E16(){}
};

#endif
