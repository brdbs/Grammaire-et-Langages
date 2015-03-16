#ifndef LEXER_H
#define LEXER_H

#include <string>

using namespace std;

class Symbole;

class Lexer
{
	public:
		Lexer(string cheminFichier);
		virtual ~Lexer();
		Symbole *getNext();
		Symbole *getCurrent();
	protected:
		string m_programme;  // seems useless 
	private:
		istringstream iss;
		string carLus;
		boost::regex motCle("var|const|lire|ecrire");
		boost::regex symbole("-|\+|/|\*|,|;|\(|\)|=|:=");
		boost::regex nb("[0-9]+");
		boost::regex id("[a-zA-Z][a-zA-Z0-9]+");
};

#endif // LEXER_H
