#include "e36.h"

#include "../Automate.h"
#include "../symbole/LigneVar.h"

E36::E36()
{

}

void E36::transition(Automate* automate)
{
	automate->reduction(new LigneVar(), 3);
}
