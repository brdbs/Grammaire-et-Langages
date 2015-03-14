#include "e14.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/OperationMul.h"


E14::E14()
{

}

void E14::transition(Automate* automate)
{
	automate->reduction(new OperationMul(), 1);
}
