#include <iostream>
#include <boost/regex.hpp>

#include "Automate.h"
#include "Lexer.h"

using namespace std;

int main(int argc, char** argv)
{
	string cheminFichier;
	if (argc == 2)
	{
		cheminFichier = argv[1];
	}
	else
	{
		cout << "nom du fichier :";
		cin >> cheminFichier;
	}
	//Automate *automate = new Automate(cheminFichier);
	Lexer lexer(cheminFichier);
	string in;
	while(cin.good())
	{
		cin >> in;
		if(in == "stop")
		{
			break;
		}else
		{
			std::cout << "lexer.getNext() : " << cheminFichier << std::endl;
			lexer.getNext();
		}
		
	}
	return 0;
}
