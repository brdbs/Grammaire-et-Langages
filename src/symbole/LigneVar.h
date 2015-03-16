#ifndef LIGNEVAR_H
#define LIGNEVAR_H


#include <string>
#include <vector>
#include "LigneDeclaration.h"



class LigneVar : public LigneDeclaration
{
	public:
		LigneVar();
		virtual ~LigneVar();
	protected:
	private:
		std::vector<std::string> m_ids;
};

#endif // LIGNEVAR_H
