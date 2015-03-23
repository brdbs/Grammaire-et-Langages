#ifndef ENDOFFILE_H
#define ENDOFFILE_H

#include <string>
#include "Symbole.h"


class EndOfFile : public Symbole
{
	public:
		EndOfFile();
		virtual ~EndOfFile();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return ""; }
	protected:
	private:
};

#endif // ENDOFFILE_H
