#include "e22.h"

#include "../Automate.h"
#include "../symbole/Facteur.h"

E22::E22()
{

}

void E22::transition(Automate* automate)
{
	automate->reduction(new Facteur(), 1);
}
