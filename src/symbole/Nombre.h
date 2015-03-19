#ifndef NOMBRE_H
#define NOMBRE_H

#include "Facteur.h"


class Nombre : public Facteur
{
	public:
		Nombre();
		virtual ~Nombre();
		virtual bool estTerminal(){return true;}
		virtual operator std::string() const{ return std::to_string(m_valeur); }
		virtual void castUp(){ m_idSymbole = FACTEUR; }
		int getValeur(){return m_valeur;}
	protected:
	private:
		int m_valeur;
};

#endif // NOMBRE_H
