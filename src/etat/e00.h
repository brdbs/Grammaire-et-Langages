#ifndef E00_H
#define E00_H
#include "etat.h"

class E00 : public Etat
{
public:
	E00();
	virtual void transition(); //goNext()
	virtual ~E00(){}
};

#endif
