#ifndef E27_H
#define E27_H
#include "etat.h"

class E27 : public Etat
{
public:
	E27();
	virtual void transition(); //goNext()
	virtual ~E27(){}
};

#endif
