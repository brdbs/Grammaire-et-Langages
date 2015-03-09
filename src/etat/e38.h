#ifndef E38_H
#define E38_H
#include "etat.h"

class E38 : public Etat
{
public:
	E38();
	virtual void transition(); //goNext()
	virtual ~E38(){}
};

#endif
