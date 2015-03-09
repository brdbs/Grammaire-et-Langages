#ifndef E11_H
#define E11_H
#include "etat.h"

class E11 : public Etat
{
public:
	E11();
	virtual void transition(); //goNext()
	virtual ~E11(){}
};

#endif
