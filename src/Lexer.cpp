#include "Lexer.h"
#include "symbole/Symbole.h"
#include <boost/regex.hpp>


#include <iostream>
#include <fstream>
#include <sstream>

Lexer::Lexer(string cheminFichier)
{
	std::cout << "Lexer : lecture de " << cheminFichier << std::endl;
	std::ifstream file(cheminFichier.c_str(), std::ifstream::in);

    if ( file )
    {

        ss << file.rdbuf();

        file.close();
        
        motCle = boost::regex("var|const|lire|ecrire");
		symbole = boost::regex("-|\\+|/|\\*|,|;|\\(|\\)|=|:=");
		nb = boost::regex("[0-9]+");
		id = boost::regex("[a-zA-Z0-9]+");
        
        
    }else
    {
		std::cout << "Erreur à l'ouverture de " << cheminFichier << std::endl;
	}
}

Lexer::~Lexer()
{
	//dtor
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
		
	std::cout  << "Lexer::getNext()"<<std::endl;
	
	
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
	
	while(ss.get(carLu))
	{
		
		canBeMotCle = boost::regex_match((carLus+carLu).c_str(), matchMotCle, motCle, boost::match_default | boost::match_partial);
		canBeSymbole = boost::regex_match((carLus+carLu).c_str(), matchSymbole, symbole, boost::match_default | boost::match_partial);
		canBeId = boost::regex_match((carLus+carLu).c_str(), matchId, id, boost::match_default | boost::match_partial);
		canBeNb = boost::regex_match((carLus+carLu).c_str(), matchNb, nb, boost::match_default | boost::match_partial);
		
		if(!canBeMotCle && !canBeSymbole && !canBeId && !canBeNb)
		{
			// pas de correspondance, regarder les match précédent (et conclure lolilol)
			if(prevCanBeMotCle)
			{
				std::cout<<"mot clé ("<<carLus<<")"<<std::endl;
			}else
			{
				if(prevCanBeSymbole)
				{
					std::cout<<"Symbole ("<<carLus<<")"<<std::endl;
				}else
				{
						if(prevCanBeId)
						{
							std::cout<<"Identifiant ("<<carLus<<")"<<std::endl;
						}else
						{
							if(prevCanBeNb)
							{
								std::cout<<"Nombre ("<<carLus<<")"<<std::endl;
							}else
							{
								if(!isspace(carLu))
								{
									std::cout<<"Erreur lexicale 42 !   ("<<(carLus+carLu)<<")"<<std::endl;
								}else
								 {
									 std::cout<<"SPAAAACE"<<std::endl;
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
	
	return NULL;
}



