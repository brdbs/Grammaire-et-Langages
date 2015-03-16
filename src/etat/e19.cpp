#include "e19.h"

#include "../Automate.h"
#include "../symbole/LigneConst.h"

E19::E19()
{

}

void E19::transition(Automate* automate)
{
	automate->reduction(new LigneConst(), 5);
}
