#ifndef FACTEUR_H
#define FACTEUR_H

#include "Terme.h"


class Facteur : public Terme
{
	public:
		Facteur();
		virtual ~Facteur();
		void castUp();
	protected:
	private:
};

#endif // FACTEUR_H
