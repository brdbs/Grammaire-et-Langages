#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <sstream>
#include <boost/regex.hpp>


using namespace std;

class Symbole;

class Lexer
{
	public:
		Lexer(string cheminFichier);
		virtual ~Lexer();
		Symbole *getNext();
		Symbole *getCurrent();
	private:
		stringstream ss;
		string carLus;
		boost::regex motCle;	
		boost::regex symbole;
		boost::regex nb;
		boost::regex id;
};

#endif // LEXER_H
