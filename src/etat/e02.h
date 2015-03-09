#ifndef E02_H
#define E02_H
#include "etat.h"

class E02 : public Etat
{
public:
	E02();
	virtual void transition(); //goNext()
	virtual ~E02(){}
};

#endif
