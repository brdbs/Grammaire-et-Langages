#include "e26.h"


#include "../Automate.h"
#include "../symbole/ExpPar.h"

E26::E26()
{

}

void E26::transition(Automate* automate)
{
	automate->reduction(new ExpPar(), 3);
}
