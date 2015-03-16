#ifndef POINTVIRGULE_H
#define POINTVIRGULE_H

#include "Symbole.h"


class PointVirgule : public Symbole
{
	public:
		PointVirgule();
		virtual ~PointVirgule();
		virtual bool estTerminal(){return true;}
	protected:
	private:
};

#endif // POINTVIRGULE_H
