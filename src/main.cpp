#include <iostream>
#include <boost/regex.hpp>
#include <string>
#include "Lexer.h"
#include "Automate.h"
<<<<<<< HEAD
#include "Lexer.h"
=======
#include "MessagesErreurs.h"
>>>>>>> master

using namespace std;

int main(int argc, const char * argv[])
{




	//test
	Automate test;

	test.lecture();
	test.afficherProgramme();

	return 0;


	//-----------------------------------------------------------------------------
	string cheminFichier;
	Lexer lexer;

	if (argc == 1) {
		MessagesErreurs::NoArgument();

		return EXIT_FAILURE;
	}

	if (argc >= 2) {
		cheminFichier = argv[argc-1];

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

// void analyserLigneCommande(int argc, const char * argv[])
// {
// 	string cheminFichier;
// 	Lexer lexer;
// 	if (argc == 0) {
// 		fprintf(stderr, "Erreur, veuillez specifier des arguments\n
// 			\tUtilisation :\n
// 			\t\t../lut [-p] [-a] [-e] [-o] source.lt\n
//       \t\t\t[-p] affiche le code source reconnu\n
//       \t\t\t[-a] analyse le programme de maniere statique\n
//       \t\t\t[-e] execute interactivement le programme\n
//       \t\t\t[-o] optimise les expressions et instructions");
// 	} else if (argc == 1) {
// 		cheminFichier = argv[0];
// 		lexer.scannerFichier(cheminFichier)
// 	}
// }
