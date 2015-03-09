#ifndef CONTEXTE_H
#define CONTEXTE_H
#include "etat.h"

class Symbole;

class Contexte
{

public:
    Contexte();
    void transition();//goNext();
    void etat(Etat* cur){m_current = cur;}
    Etat* etat()const{return m_current;}
private:
    Etat* m_current ;
};

#endif // CONTEXTE_H
