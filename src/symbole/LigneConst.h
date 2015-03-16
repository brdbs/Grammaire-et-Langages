#ifndef LIGNECONST_H
#define LIGNECONST_H

#include <string>
#include <vector>
#include "LigneDeclaration.h"
#include "DConst.h"



class LigneConst : public LigneDeclaration
{
	public:
		LigneConst();
		virtual ~LigneConst();
	protected:
	private:
		std::string m_id;
		int m_value;
		LigneConst * m_prevConst;
};

#endif // LIGNECONST_H
