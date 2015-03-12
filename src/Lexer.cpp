#include "Lexer.h"
#include "symbole/Symbole.h"

#include <iostream>
#include <fstream>

Lexer::Lexer()
{

}

Lexer::~Lexer()
{
	//dtor
}

int Lexer::getNext(){
	return 0;
}

int Lexer::scannerFichier(string cheminFichier){
	ifstream fichier(cheminFichier.c_str(), ifstream::ate);
    if (fichier.is_open())
	{
		int tailleFichier = (int) fichier.tellg();
		fichier.seekg(0, ios_base::beg);

		char *buf = new char[tailleFichier];
		fichier.read(buf,tailleFichier);
		m_programme.append(buf, tailleFichier);

		delete buf;
		fichier.close();
		return 0;
	}
	else
	{
		cout << "Erreur à l'ouverture de " << cheminFichier << endl;
		return -1;
	}
}
