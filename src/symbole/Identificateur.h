#ifndef IDENTIFICATEUR_H
#define IDENTIFICATEUR_H
#include <string>
#include "Facteur.h"



class Identificateur : public Facteur
{
	public:
		Identificateur(std::string id);
		virtual ~Identificateur();
		virtual bool estTerminal(){return m_idSymbole==IDENTIFICATEUR;}
		virtual operator std::string() const{ return m_id; }
	protected:
	private:
		std::string m_id;
};

#endif // IDENTIFICATEUR_H
