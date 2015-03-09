#ifndef E14_H
#define E14_H
#include "etat.h"

class E14 : public Etat
{
public:
	E14();
	virtual void transition(); //goNext()
	virtual ~E14(){}
};

#endif
