#include "e30.h"

#include "../Automate.h"
#include "../symbole/BlocInst.h"

E30::E30()
{

}

void E30::transition(Automate* automate)
{
	automate->reduction(new BlocInst(), 5);
}
