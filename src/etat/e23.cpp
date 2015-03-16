#include "e23.h"

#include "../Automate.h"
#include "../symbole/Symbole.h"
#include "../symbole/OperationMul.h"
#include "e14.h"
#include "e15.h"
#include "e16.h"

E23::E23()
{

}

void E23::transition(Automate* automate)
{
	Symbole *s = automate->getNextLexer();
	switch(*s){
	case MULT:
        automate->decalage(s, new E14());
        break;
	case DIV:
		automate->decalage(s, new E15());
		break;
	default:
		automate->reduction(new OperationMul(),1);
	}
}

void E23::transition(Automate* automate, Symbole *s)
{
	switch(*s){
	case OPERATIONMUL:
        automate->decalage(s, new E16());
        break;
	}
}
