#ifndef SYMBOLE_H
#define SYMBOLE_H

//Déclaration des id des symboles (utilisé dans Etat::transition)
#define PROGRAMME 1
#define LIGNEDECLARATION 2
#define LIGNEINSTRUCTION 3
#define LIGNECONST 4
#define LIGNEVAR 5
#define LECTURE 6
#define AFFECTATION 7
#define ECRITURE 8
#define EXPRESSION 9
#define TERME 10
#define OPERATIONAD 11
#define FACTEUR 12
#define OPERATIONMUL 13
#define EXPPAR 14
#define IDENTIFICATEUR 15
#define NOMBRE 16
#define VIRGULE 17
#define EGAL
#define PAROUVRANTE
#define PARFERMANTE
#define MOINS
#define PLUS
#define DIV
#define MULT
#define POINTVIRGULE
#define DEUXPOINTSEGAL
#define CONST
#define VAR
#define VAR
#define LIRE
#define ECRIRE

class Symbole
{
	public:
		Symbole(int id) : m_ident(id) {}
		Symbole();
		virtual ~Symbole();
		void print();
		operator int() const { return m_ident; }
	protected:
		int m_ident;
	private:
};

#endif // SYMBOLE_H
