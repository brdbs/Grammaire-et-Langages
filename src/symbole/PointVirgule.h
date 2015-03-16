#ifndef POINTVIRGULE_H
#define POINTVIRGULE_H

#include <string>
#include "Symbole.h"


class PointVirgule : public Symbole
{
	public:
		PointVirgule();
		virtual ~PointVirgule();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return ";"; }
	protected:
	private:
};

#endif // POINTVIRGULE_H
