#include "e02.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "e03.h"
#include "e31.h"
#include "e37.h"


E02::E02()
{

}

void E02::transition(Automate* automate)
{
	Symbole *s = automate->getNextLexer();
	switch(*s){
    case VAR:
        automate->decalage(s, new E31());
        break;
    case CONST:
        automate->decalage(s, new E37());
        break;
    case LIGNEINSTRUCTION:	//Comment le lexer gère la création de LigneInstruction ?
        automate->decalage(s, new E03());
        break;
    }
}
