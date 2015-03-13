#ifndef LEXER_H
#define LEXER_H

#include <string>

using namespace std;

class Symbole;

class Lexer
{
	public:
		Lexer();
		virtual ~Lexer();
		Symbole *getNext();
		int scannerFichier(string cheminFichier);
	protected:
		string m_programme;
	private:
};

#endif // LEXER_H
