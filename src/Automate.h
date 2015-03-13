#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <string>
#include <stack>
#include <vector>

#include "Lexer.h"

using namespace std;

class Symbole;
class Etat;

class Automate
{
    public:
        Automate(string cheminFichier);
        virtual ~Automate();

        void lecture();
        void decalage(Symbole *s, Etat *e);
        Symbole *getNextLexer();
		Symbole** reduction(Symbole *s, int nbSymboles);
    protected:
        stack <Symbole*> m_pileSymbole;
        stack <Etat*> m_pileEtats;
		Lexer m_lexer;
    private:
};

#endif // AUTOMATE_H
