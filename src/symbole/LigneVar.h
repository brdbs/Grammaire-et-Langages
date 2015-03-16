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
		std::string m_ids;
		LigneVar * next_id;
};

#endif // LIGNEVAR_H
