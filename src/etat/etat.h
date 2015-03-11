#ifndef ETAT_H
#define ETAT_H

class Automate;
class Symbole;
class Etat
{
public:
    Etat();
    virtual void transition(Automate* automate, Symbole *s);//goNext();
	virtual bool isFinal(){ return false; }
    virtual ~Etat(){}
};

#endif // ETAT_H
