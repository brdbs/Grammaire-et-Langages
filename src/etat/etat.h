#ifndef ETAT_H
#define ETAT_H

class Etat
{
public:
    Etat();
    virtual void transition();//goNext();
    virtual ~Etat(){}
};

#endif // ETAT_H
