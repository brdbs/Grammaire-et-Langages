#include "e00.h"
#include "e02.h"

#include "../Automate.h"
#include "../symbole/Symbole.h"
#include "../symbole/DConst.h"


E00::E00()
{

}

void E00::transition(Automate &automate, Symbole *s)
{
    switch(*s){
    case LIGNEDECLARATION:
        automate.decalage(s, new E02());
        break;
    }
}
