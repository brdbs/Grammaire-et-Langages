#ifndef E44_H
#define E44_H
#include "etat.h"

class E44 : public Etat
{
public:
	E44();
	virtual void transition(Automate* automate, Symbole *s); //goNext()
	virtual ~E44(){}
};

#endif
