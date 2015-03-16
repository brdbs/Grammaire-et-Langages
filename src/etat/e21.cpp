#include "e21.h"

#include "../Automate.h"
#include "../symbole/Facteur.h"

E21::E21()
{

}

void E21::transition(Automate* automate)
{
	//F->id
	automate->reduction();
}
