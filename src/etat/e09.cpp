#include "e09.h"

#include "../symbole/Symbole.h"
#include "../Automate.h"
#include "../symbole/BlocInst.h"
#include "../Symbole/Ecriture.h"


E09::E09()
{

}

void E09::transition(Automate* automate)
{

	automate->reduction(new BlocInst(new Ecriture()), 4);
}
