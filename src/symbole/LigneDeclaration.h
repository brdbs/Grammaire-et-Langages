#ifndef LIGNEDECLARATION_H
#define LIGNEDECLARATION_H

#include "Symbole.h"



class LigneDeclaration : public Symbole
{
	public:
		LigneDeclaration();
		virtual ~LigneDeclaration();
	protected:
	private:
		LigneDeclaration *  m_prevDec;

		
};

#endif // LIGNEDECLARATION_H
