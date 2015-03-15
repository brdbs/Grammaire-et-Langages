#include "e32.h"

#include "../Automate.h"
#include "../symbole/LigneVar.h"

E32::E32()
{

}

void E32::transition(Automate* automate)
{
	automate->reduction(new LigneVar(), 1);
}
