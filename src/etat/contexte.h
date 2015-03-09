#ifndef CONTEXTE_H
#define CONTEXTE_H
#include "etat.h"

class Symbole;

class Contexte
{

public:
    Contexte();
    void transition();//goNext();
    void etat(Etat* cur){current = cur;}
    Etat* etat()const{return current;}
private:
    Etat* current;
};

#endif // CONTEXTE_H
