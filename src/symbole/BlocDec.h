#ifndef BLOCDEC_H
#define BLOCDEC_H

#include <string>
#include "Symbole.h"
#include "LigneDeclaration.h"

class BlocDec : public Symbole
{
	public:
		BlocDec();
		virtual ~BlocDec();
		virtual operator std::string() const;
	protected:
	private:
		BlocDec * m_prevDec;
		LigneDeclaration* m_currentLine;
};

#endif // BLOCDEC_H
