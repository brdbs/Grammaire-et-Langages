#include "e42.h"

#include "../Automate.h"
#include "../symbole/LigneDeclaration.h"

E42::E42()
{

}

void E42::transition(Automate* automate)
{
	automate->reduction(new LigneDeclaration(), 4);
}
