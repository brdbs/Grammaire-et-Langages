#include "e42.h"

#include "../Automate.h"
#include "../symbole/BlocDec.h"

E42::E42()
{

}

void E42::transition(Automate* automate)
{
	automate->reduction(new BlocDec(), 4);
}
