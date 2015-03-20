#include "Lexer.h"
#include "symbole/Symbole.h"

#include <iostream>
#include <fstream>

#include "symbole/Var.h"
#include "symbole/Identificateur.h"
#include "symbole/Virgule.h"
#include "symbole/ParFermante.h"
#include "symbole/ParOuvrante.h"
#include "symbole/Plus.h"
#include "symbole/PointVirgule.h"
#include "symbole/EndOfFile.h"
#include "symbole/Const.h"
#include "symbole/Egal.h"
#include "symbole/Nombre.h"
#include "symbole/Virgule.h"
#include "symbole/DeuxPointsEgal.h"
#include "symbole/Mult.h"
#include "symbole/Moins.h"
#include "symbole/Lire.h"
#include "symbole/Ecrire.h"


Lexer::Lexer()
{
	//var a,b;
	m_test.push(new Var());
	m_test.push(new Identificateur("a"));
	m_test.push(new Virgule());
	m_test.push(new Identificateur("b"));
	m_test.push(new PointVirgule());

	//const c = 4;
	m_test.push(new Const());
	m_test.push(new Identificateur("c"));
	m_test.push(new Egal());
	m_test.push(new Nombre(4));
	m_test.push(new PointVirgule());

	//const d = 4;
	m_test.push(new Const());
	m_test.push(new Identificateur("d"));
	m_test.push(new Egal());
	m_test.push(new Nombre(6));
	m_test.push(new Virgule());
	m_test.push(new Identificateur("z"));
	m_test.push(new Egal());
	m_test.push(new Nombre(6));
	m_test.push(new PointVirgule());

	//var e;
	m_test.push(new Var());
	m_test.push(new Identificateur("e"));
	m_test.push(new PointVirgule());

	//a := (c+d)*3-5;
	m_test.push(new Identificateur("a"));
	m_test.push(new DeuxPointsEgal());
	m_test.push(new ParOuvrante());
	m_test.push(new Identificateur("c"));
	m_test.push(new Plus());
	m_test.push(new Identificateur("d"));
	m_test.push(new ParFermante());
	m_test.push(new Mult());
	m_test.push(new Nombre(3));
	m_test.push(new Moins());
	m_test.push(new Nombre(5));
	m_test.push(new PointVirgule());
	
	//lire b; 
	m_test.push(new Lire());
	m_test.push(new Identificateur("b"));
	m_test.push(new PointVirgule());

	//ecrire a*b;
	m_test.push(new Ecrire());
	m_test.push(new Identificateur("a"));
	m_test.push(new Mult());
	m_test.push(new Identificateur("b"));
	m_test.push(new PointVirgule());

	//e := b+d;
	m_test.push(new Identificateur("e"));
	m_test.push(new DeuxPointsEgal());
	m_test.push(new Identificateur("b"));
	m_test.push(new Plus());
	m_test.push(new Identificateur("d"));
	m_test.push(new PointVirgule());

	//ecrire e;
	m_test.push(new Ecrire());
	m_test.push(new Identificateur("e"));
	m_test.push(new PointVirgule());


	//EOF
	m_test.push(new EndOfFile());

}

Lexer::~Lexer()
{
	//dtor
}

Symbole *Lexer::getNext(){
	//TODO
	//return NULL;
	Symbole * tmp;
	tmp = m_test.front();
	m_test.pop();
	return tmp;

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
