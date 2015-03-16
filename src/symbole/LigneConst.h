#ifndef LIGNECONST_H
#define LIGNECONST_H

#include <string>
#include <vector>
#include "LigneDeclaration.h"
#include "BlocDec.h"



class LigneConst : public LigneDeclaration
{
	public:
		LigneConst();
		virtual ~LigneConst();
		virtual operator std::string() const;
	protected:
	private:
		std::string m_id;
		int m_value;
		LigneConst * m_prevConst;
};

#endif // LIGNECONST_H
