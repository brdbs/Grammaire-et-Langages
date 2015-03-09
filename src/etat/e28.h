#ifndef E28_H
#define E28_H
#include "etat.h"

class E28 : public Etat
{
public:
	E28();
	virtual void transition(); //goNext()
	virtual ~E28(){}
};

#endif
