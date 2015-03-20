#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <queue>
#include "symbole/Symbole.h"

using namespace std;

class Symbole;

class Lexer
{
	public:
		Lexer();
		virtual ~Lexer();
		Symbole *getNext();
		Symbole *getCurrent();
		int scannerFichier(string cheminFichier);
	protected:
		string m_programme;
		queue<Symbole *> m_test;
	private:
};

#endif // LEXER_H
