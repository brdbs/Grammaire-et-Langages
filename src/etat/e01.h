#ifndef E01_H
#define E01_H
#include "etat.h"

class E01 : public Etat
{
public:
	E01();
	virtual void transition(Automate* automate); //goNext()
	virtual bool isFinal(){ return true; }
	virtual ~E01(){}
};

#endif
