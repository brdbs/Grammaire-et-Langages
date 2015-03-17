#ifndef FACTEUR_H
#define FACTEUR_H

#include "Terme.h"


class Facteur : public Terme
{
	public:
		Facteur();
		virtual ~Facteur();
		
		virtual void castUp(){ m_idSymbole = FACTEUR; }
	protected:
	private:
};

#endif // FACTEUR_H
