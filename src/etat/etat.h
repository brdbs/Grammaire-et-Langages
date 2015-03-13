#ifndef ETAT_H
#define ETAT_H

#include <iostream>

class Automate;
class Symbole;
class Etat
{
public:
    Etat();
    virtual void transition(Automate* automate);//goNext();
    /**
     *Appelée pour le décalage en fin de réduction.
     */
    virtual void transition(Automate* automate, Symbole *s){
		std::cerr << "Attention : Etat::transition(Automate, Symbole) : fonction non implémentée" << std::endl;
    };
	virtual bool isFinal(){ return false; }
    virtual ~Etat(){}
};

#endif // ETAT_H
