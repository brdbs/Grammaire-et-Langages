#ifndef E00_H
#define E00_H
#include "etat.h"

class Automate;
class Symbole;

class E00 : public Etat
{
public:
	E00();
	void transition(Automate* automate, Symbole *s);
	virtual ~E00(){}
};

#endif
