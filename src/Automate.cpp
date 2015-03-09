#include "Automate.h"

#include <iostream>
#include <fstream>

using namespace std;

Automate::Automate(string cheminFichier)
{
    ifstream fichier(cheminFichier.c_str(), ifstream::ate);
    if (fichier.is_open())
	{
		int tailleFichier = fichier.tellg();
		fichier.seekg(0, ios_base::beg);

		char buf[tailleFichier];
		fichier.read(buf,tailleFichier);
		m_programme.append(buf, tailleFichier);

		fichier.close();
	}
	else
	{
		cout << "Erreur à l'ouverture de " << cheminFichier << endl;
	}
}

Automate::~Automate()
{
    //dtor
}

void Automate::lecture()
{
}
