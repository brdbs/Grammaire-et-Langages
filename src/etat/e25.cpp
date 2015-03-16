#include "e25.h"

#include "../Automate.h"
#include "../symbole/Symbole.h"
#include "e26.h"
#include "e10.h"
#include "e11.h"
#include "e12.h"

E25::E25()
{

}

void E25::transition(Automate* automate)
{
	Symbole *s = automate->getNextLexer();
	switch(*s){
	case PAROUVRANTE:
        automate->decalage(s, new E26());
        break;
	case PLUS:
		automate->decalage(s, new E10());
		break;
	case MOINS:
		automate->decalage(s, new E11());
		break;
	}
}

void E25::transition(Automate* automate, Symbole *s)
{
	switch(*s){
	case OPERATIONAD:
        automate->decalage(s, new E12());
        break;
	}
}
