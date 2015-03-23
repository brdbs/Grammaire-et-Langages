#include "e15.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/OperationMul.h"

E15::E15()
{

}

void E15::transition(Automate* automate)
{
	automate->reduction();
}
