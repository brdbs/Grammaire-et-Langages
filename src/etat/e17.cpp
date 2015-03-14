#include "e17.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/Terme.h"

E17::E17()
{

}

void E17::transition(Automate* automate)
{
	automate->reduction(new Terme(), 3);
}
