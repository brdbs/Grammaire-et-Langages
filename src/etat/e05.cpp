#include "e05.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "e06.h"

E05::E05()
{

}

void E05::transition(Automate* automate, Symbole *s)
{
	switch(*s){
    case POINTVIRGULE:
        automate->decalage(s, new E06());
        break;
	}
}
