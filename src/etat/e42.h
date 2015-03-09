#ifndef E42_H
#define E42_H
#include "etat.h"

class E42 : public Etat
{
public:
	E42();
	virtual void transition(); //goNext()
	virtual ~E42(){}
};

#endif
