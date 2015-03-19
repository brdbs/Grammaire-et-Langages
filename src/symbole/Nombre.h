#ifndef NOMBRE_H
#define NOMBRE_H

#include "Facteur.h"


class Nombre : public Facteur
{
	public:
		Nombre(int nb);
		virtual ~Nombre();
		virtual bool estTerminal(){return m_idSymbole==NOMBRE;}
		virtual operator std::string() const{ return std::to_string(m_valeur); }
		int getValeur(){return m_valeur;}
	protected:
	private:
		int m_valeur;
};

#endif // NOMBRE_H
