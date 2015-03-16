#include "e30.h"

#include "../Automate.h"
#include "../symbole/LigneInstruction.h"

E30::E30()
{

}

void E30::transition(Automate* automate)
{
	automate->reduction(new LigneInstruction(), 5);
}
