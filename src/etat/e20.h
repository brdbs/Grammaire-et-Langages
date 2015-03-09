#ifndef E20_H
#define E20_H
#include "etat.h"

class E20 : public Etat
{
public:
	E20();
	virtual void transition(); //goNext()
	virtual ~E20(){}
};

#endif
