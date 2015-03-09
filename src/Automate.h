#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <string>
using namespace std;

class Automate
{
    public:
        Automate(string cheminFichier);
        virtual ~Automate();
        void lecture();
    protected:
		string m_programme;
    private:
};

#endif // AUTOMATE_H
