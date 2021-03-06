#include "e41.h"

#include "../Automate.h"
#include "../MessagesErreurs.h"
#include "../symbole/Symbole.h"
#include "e42.h"
#include "e43.h"

E41::E41()
{

}

void E41::transition(Automate* automate)
{
	Symbole *s = automate->getNextLexer();
	switch(*s){
	case POINTVIRGULE:
        automate->decalage(s, new E42());
        break;
	case VIRGULE:
        automate->decalage(s, new E43());
        break;
	default:
		MessagesErreurs::ErreurLexicale(0, 0, ATTENDU_VIRGPOINTVIRG);
        break;
	}
}
