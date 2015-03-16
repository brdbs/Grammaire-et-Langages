#include <iostream>
#include <boost/regex.hpp>

#include "Automate.h"
#include "MessagesErreurs.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << MessagesErreurs::NoArgument() << endl;
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
	Automate *automate = new Automate(cheminFichier);
	string pause;
	cin >> pause;
	return 0;
}
