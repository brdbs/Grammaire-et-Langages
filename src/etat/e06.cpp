#include "e06.h"
#include "../Automate.h"
#include "../symbole/LigneInstruction.h"

E06::E06()
{

}

void E06::transition(Automate* automate)
{
	//Dans cet état, on est obligé de faire une réduction, par besoin de récupérer un symbole depuis le lexer
	automate->reduction(new LigneInstruction, 4);
}
