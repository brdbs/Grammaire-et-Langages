#ifndef DEUXPOINTSEGAL_H
#define DEUXPOINTSEGAL_H

#include "Symbole.h"


class DeuxPointsEgal : public Symbole
{
	public:
		DeuxPointsEgal();
		virtual ~DeuxPointsEgal();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // DEUXPOINTSEGAL_H
