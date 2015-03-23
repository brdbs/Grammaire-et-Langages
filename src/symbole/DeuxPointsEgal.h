#ifndef DEUXPOINTSEGAL_H
#define DEUXPOINTSEGAL_H

#include <string>
#include "Symbole.h"


class DeuxPointsEgal : public Symbole
{
	public:
		DeuxPointsEgal();
		virtual ~DeuxPointsEgal();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const { return ":="; }
	protected:
	private:
};

#endif // DEUXPOINTSEGAL_H
