#ifndef FACTEUR_H
#define FACTEUR_H

#include "Terme.h"


class Facteur : public Terme
{
	public:
		Facteur();
		virtual ~Facteur();
		void castUp();
		virtual int calculer(Automate *automate) = 0;
		virtual int* evaluer(Automate *automate) = 0;
	protected:
	private:
};

#endif // FACTEUR_H
