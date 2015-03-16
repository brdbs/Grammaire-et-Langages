#include "e10.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/OperationAd.h"


E10::E10()
{

}

void E10::transition(Automate* automate)
{
	automate->reduction(new OperationAd(), 1);
}
