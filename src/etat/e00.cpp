#include "e00.h"
#include "e01.h"
#include "e02.h"

#include "../Automate.h"
#include "../symbole/Symbole.h"
#include "../symbole/DConst.h"
#include "../symbole/LigneDeclaration.h"


E00::E00()
{

}

void E00::transition(Automate* automate)
{
	//Si on arrive par cette surcharge, c'est que l'on est au début de l'analyse
	//-> Réduction par D
	automate->reduction(new LigneDeclaration(), 0);
}

void E00::transition(Automate* automate, Symbole *s){
	switch(*s){
	case LIGNEDECLARATION:
		automate->decalage(s, new E02());
		break;
	case PROGRAMME:
		automate->decalage(s, new E01());
		break;
	}
}
