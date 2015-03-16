#include "Lexer.h"
#include "symbole/Symbole.h"
#include <boost/regex.hpp>


Lexer::Lexer()
{
	//ctor
}

Lexer::~Lexer()
{
	//dtor
}

int Lexer::getNext(){
	return 0;
	
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
		
	carLus = "";
	char carLu = '';
	boost::match_results<std::string::const_iterator> what;
	 
	bool prevCanBeMotCle=false;
	bool prevCanBeSymbole=false;
	bool prevCanBeId=false;
	bool prevCanBeNb=true;
	
	bool canBeMotCle=false;
	bool canBeSymbole=false;
	bool canBeId=false;
	bool canBeNb=false;
	
	cmatch matchMotCle;
	cmatch matchSymbole;
	cmatch matchId;
	cmatch matchNb;
	
	while(iss.get(carLu))
	{
		canBeMotCle = boost::regex_match(carLus+carLu, matchMotCle, motCle, boost::match_default | boost::match_partial);
		canBeSymbole = boost::regex_match(carLus+carLu, matchSymbole, symbole, boost::match_default | boost::match_partial);
		canBeId = boost::regex_match(carLus+carLu, matchId, nb, boost::match_default | boost::match_partial);
		canBeNb = boost::regex_match(carLus+carLu, matchNb, id, boost::match_default | boost::match_partial);
		
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
								
								std::cout<<"Erreur lexicale 42 !"<<std::endl;
							}
						}
				}
			}
			carLus = carLu;
				
		}else
		{
			if(canBeMotCle)
			{
				prevCanBeMotCle = matchMotCle.matched;
			}
			if(canBeSymbole)
			{
				prevCanBeSymbole = matchSymbole.matched;
			}
			if(canBeId)
			{
				prevCanBeId = matchId.matched;
			}
			if(canBeNb)
			{
				prevCanBeNb = matchNb.matched;
			}
			
		}
		
		
	}
	
	
	
}



