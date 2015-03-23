#define DEBUG true

#include "Lexer.h"
#include "symbole/Symbole.h"
#include <boost/regex.hpp>

#include <stdlib.h> 
#include <iostream>
#include <fstream>
#include <sstream>

#include "symbole/Var.h"
#include "symbole/Identificateur.h"
#include "symbole/Virgule.h"
#include "symbole/ParFermante.h"
#include "symbole/ParOuvrante.h"
#include "symbole/Plus.h"
#include "symbole/Div.h"
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
	motCle = boost::regex("var|const|lire|ecrire");
	symbole = boost::regex("-|\\+|/|\\*|,|;|\\(|\\)|=|:=");
	nb = boost::regex("[0-9]+");
	id = boost::regex("[a-zA-Z0-9]+");
}

Lexer::~Lexer()
{
	//dtor
}

int Lexer::scannerFichier(string cheminFichier)
{
	if(DEBUG) std::cout << "Lexer : lecture de " << cheminFichier << std::endl;
	std::ifstream file(cheminFichier.c_str(), std::ifstream::in);

    if ( file )
    {
        ss << file.rdbuf();
        file.close();

    }else
    {
		if(DEBUG) std::cerr << "Erreur à l'ouverture de " << cheminFichier << std::endl;
		return -1;
	}
    
    if(DEBUG) std::cout<< " lecture du fichier finie"<<std::endl;
    return 0 ;
	
}

Symbole * getCurrent()
{
	// TO DO
	return NULL;

}



Symbole * Lexer::getNext(){
	
	/* boucler sur la lecture de caractere
		*
		* rechercher les expreg correspondant totalement ou partiellement aux caractères lus jusqu'a present
		* 
		* on lit les caractères jusqu'a ce que plus aucune expreg ne corresponde.
		* A ce moment la, si l'on avait une expreg correspondait (totalement), on enregistre le symbole associé.
		* Sinon il y a une erreur.
		* 
		* http://www.boost.org/doc/libs/1_31_0/libs/regex/doc/partial_matches.html
		* 
	*/
		
	if(DEBUG) std::cout  << "Lexer::getNext()"<<std::endl;
	
	
	carLus = "";
	char carLu;
	 
	bool prevCanBeMotCle=false;
	bool prevCanBeSymbole=false;
	bool prevCanBeId=false;
	bool prevCanBeNb=true;
	
	bool canBeMotCle=false;
	bool canBeSymbole=false;
	bool canBeId=false;
	bool canBeNb=false;
	
	boost::cmatch matchMotCle;
	boost::cmatch matchSymbole;
	boost::cmatch matchId;
	boost::cmatch matchNb;
	Symbole * symb = NULL;
	
	while(symb == NULL && !ss.eof())
	{
		ss.get(carLu);
		canBeMotCle = boost::regex_match((carLus+carLu).c_str(), matchMotCle, motCle, boost::match_default | boost::match_partial);
		canBeSymbole = boost::regex_match((carLus+carLu).c_str(), matchSymbole, symbole, boost::match_default | boost::match_partial);
		canBeId = boost::regex_match((carLus+carLu).c_str(), matchId, id, boost::match_default | boost::match_partial);
		canBeNb = boost::regex_match((carLus+carLu).c_str(), matchNb, nb, boost::match_default | boost::match_partial);
		
		if(!canBeMotCle && !canBeSymbole && !canBeId && !canBeNb)
		{
			// pas de correspondance, regarder les match précédent
			if(prevCanBeMotCle)
			{
				if(DEBUG) std::cout<<"mot clé ("<<carLus<<")"<<std::endl;
				if(carLus == "var")
				{
					symb = new Var();
				}
				if(carLus == "const")
				{
					symb = new Const();
				}
				if(carLus == "lire")
				{
					symb = new Lire();
				}
				if(carLus == "ecrire")
				{
					symb = new Ecrire();
				}
			}else
			{
				if(prevCanBeSymbole)
				{
					if(DEBUG) std::cout<<"Symbole ("<<carLus<<")"<<std::endl;
					if(carLus == "-")
					{
						symb = new Moins();
					}
					if(carLus == "+")
					{
						symb = new Plus();
					}
					if(carLus == "/")
					{
						symb = new Div();
					}
					if(carLus == "*")
					{
						symb = new Mult();
					}
					if(carLus == ",")
					{
						symb = new Virgule();
					}
					if(carLus == ";")
					{
						symb = new PointVirgule();
					}
					if(carLus == "(")
					{
						symb = new ParOuvrante();
					}
					if(carLus == ")")
					{
						symb = new ParFermante();
					}
					if(carLus == "=")
					{
						symb = new Egal();
					}
					if(carLus == ":=")
					{
						symb = new DeuxPointsEgal();
					}
					
				}else
				{
						if(prevCanBeId)
						{
							if(DEBUG) std::cout<<"Identifiant ("<<carLus<<")"<<std::endl;
							symb = new Identificateur(carLus);
						}else
						{
							if(prevCanBeNb)
							{
								if(DEBUG) std::cout<<"Nombre ("<<carLus<<")"<<std::endl;
								symb = new Nombre(atoi(carLus.c_str()));
							}else
							{
								if(!isspace(carLu))
								{
									if(DEBUG) std::cout<<"Erreur lexicale 42 !   ("<<(carLus+carLu)<<")"<<std::endl;
								}else
								 {
									if(DEBUG) std::cout<<"SPAAAACE"<<std::endl;
								 }
							}
						}
				}
			}
			prevCanBeMotCle=false;
			prevCanBeSymbole=false;
			prevCanBeId=false;
			prevCanBeNb=false;
			if(!isspace(carLu))
			{
				carLus = "";
				ss.unget();
			}else
			 {
				 carLus = "";
			 }				
		}else 
		{
			if(canBeMotCle)
			{
				prevCanBeMotCle = matchMotCle[0].matched;
			}
			if(canBeSymbole)
			{
				prevCanBeSymbole = matchSymbole[0].matched;
			}
			if(canBeId)
			{
				prevCanBeId = matchId[0].matched;
			}
			if(canBeNb)
			{
				prevCanBeNb = matchNb[0].matched;
			}
			carLus += carLu;
			
		}
		
		
	}
	if(symb == NULL && !ss.eof())
	{
		symb = new EndOfFile();
	}
	return symb;
}



