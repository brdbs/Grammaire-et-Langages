#ifndef LIGNECONST_H
#define LIGNECONST_H

#include <string>
#include <vector>
#include "LigneDeclaration.h"
#include "BlocDec.h"

struct SymboleTable;

class LigneConst : public LigneDeclaration
{
	public:
		LigneConst();
		virtual ~LigneConst();
		virtual operator std::string() const;
		virtual void initialiser(Symbole **, int taille);
		std::string const demanderId(){return m_id;}
		SymboleTable *construireSymboleTable();
	protected:
	private:
		std::string m_id;
		int m_value;
		LigneConst * m_prevConst;
};

#endif // LIGNECONST_H
