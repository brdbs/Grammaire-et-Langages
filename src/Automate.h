#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <string>
#include <stack>
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
    protected:
		string m_programme;
        stack <Symbole*> m_pileSymbole;
        stack <Etat*> m_pileEtats;
    private:
};

#endif // AUTOMATE_H
