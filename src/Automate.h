#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <string>
#include <stack>
#include <map>

#include "Lexer.h"

using namespace std;

class Symbole;
class Etat;

//struct SymboleTable {
//    int m_valeur;
//    bool m_declaree;
//    bool m_use;
//    bool m_useBAff;
//    bool m_constante;
//    SymboleTable(int valeur, bool declaree, bool use, bool useBAff, bool constante) : m_valeur(valeur), m_declaree(declaree), m_use(use), m_useBAff(useBAff), m_constante(constante){}
//};

struct SymboleTable {
    int m_valeur;
    bool m_use;
    bool m_affectee;
    bool m_constante;
    SymboleTable(int valeur, bool use, bool affectee, bool constante) : m_valeur(valeur), m_use(use), m_affectee(affectee), m_constante(constante){}
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
		void majTableSymboles(Symbole *s);

		/**
		 * Vérifie les indicateurs pour une expression en vue d'une utilisation de celle-ci.
		 **/
		bool verifierIdentificateurs(vector<string> identificateurs);
};

#endif // AUTOMATE_H
