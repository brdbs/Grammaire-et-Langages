#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <string>
#include <stack>
#include <map>

#include "Lexer.h"

using namespace std;

class Symbole;
class Etat;

struct SymboleTable {
    string id;
    int valeur;
    bool declaree;
    bool use;
    bool useBAff;
    bool constante;
};

typedef map<string,SymboleTable*> ArbreSymboles;

class Automate
{
    public:
		Automate();
        Automate(string cheminFichier);
        virtual ~Automate();

        void lecture();
        void decalage(Symbole *s, Etat *e);
        Symbole *getNextLexer();
		void reduction(Symbole *s, int nbSymboles);
		void reduction();
		void afficherProgramme();
    protected:
        stack <Symbole*> m_pileSymbole;
        stack <Etat*> m_pileEtats;
        ArbreSymboles m_aSymboles;
		Lexer m_lexer;
		Symbole *m_symbole;
    private:
};

#endif // AUTOMATE_H
