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
		std::vector<DConst*> m_dConst;
};

#endif // LIGNECONST_H
