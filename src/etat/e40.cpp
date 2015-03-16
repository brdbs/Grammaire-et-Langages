#include "e40.h"

#include "../Automate.h"
#include "../symbole/LigneConst.h"

E40::E40()
{

}

void E40::transition(Automate* automate)
{
	automate->reduction(new LigneConst(), 3);
}
