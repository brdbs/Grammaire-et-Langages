#ifndef E33_H
#define E33_H
#include "etat.h"

class E33 : public Etat
{
public:
	E33();
	virtual void transition(); //goNext()
	virtual ~E33(){}
};

#endif
