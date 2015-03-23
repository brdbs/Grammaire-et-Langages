#include "e11.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"


E11::E11()
{

}

void E11::transition(Automate* automate)
{
	automate->reduction();
}
