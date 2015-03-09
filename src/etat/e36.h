#ifndef E36_H
#define E36_H
#include "etat.h"

class E36 : public Etat
{
public:
	E36();
	virtual void transition(); //goNext()
	virtual ~E36(){}
};

#endif
