#include "e17.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/OperationMul.h"

E17::E17()
{

}

void E17::transition(Automate* automate)
{
	//opertionMul est considéré comme un terme
	automate->reduction(new OperationMul(), 3);
}
