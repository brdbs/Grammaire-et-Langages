#include "e20.h"

#include "../Automate.h"
#include "../symbole/Terme.h"

E20::E20()
{

}

void E20::transition(Automate* automate)
{
	automate->reduction(new Terme(), 1);
}
