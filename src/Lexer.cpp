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
	while(iss.get(carLu))
	{
		if(0 == boost::regex_match(carLus+carLu, what, motCle, boost::match_default | boost::match_partial)) //to customizzzzzzze
		{
		
		
		}
	}
	
	
	
	
	
	
}



