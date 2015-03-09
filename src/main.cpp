#include <iostream>
#include <boost/regex.hpp>

#include "Automate.h"


using namespace std;

int main(int argc, char** argv)
{
	if(argc == 2)
	{
		string cheminFichier (argv[1]);
		Automate *automate = new Automate(cheminFichier);
	}

	return 0;
}
