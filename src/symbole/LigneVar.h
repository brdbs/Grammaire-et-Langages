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
		virtual operator std::string() const;
	protected:
	private:
		std::string m_id;
		LigneVar * m_prevId;
};

#endif // LIGNEVAR_H
