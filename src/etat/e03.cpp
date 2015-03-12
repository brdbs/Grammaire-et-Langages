#include "e03.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "e04.h"
#include "e07.h"
#include "e27.h"

E03::E03()
{

}

void E03::transition(Automate* automate, Symbole *s)
{
	switch(*s){
    case LIRE:
        automate->decalage(s, new E04());
        break;
    case ECRIRE:
        automate->decalage(s, new E07());
        break;
    case IDENTIFICATEUR:
        automate->decalage(s, new E27());
        break;

	//TODO : Quand fait-on la réduction ?
    }
}
