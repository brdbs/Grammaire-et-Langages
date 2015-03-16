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
#define EGAL 18
#define PAROUVRANTE 19
#define PARFERMANTE 20
#define MOINS 21
#define PLUS 22
#define DIV 23
#define MULT 24
#define POINTVIRGULE 25
#define DEUXPOINTSEGAL 26
#define CONST 27
#define VAR 28
#define LIRE 29
#define ECRIRE 30


class Symbole
{
	public:
		Symbole(int id) : m_id(id) {}
		Symbole();
		virtual ~Symbole();
		void print();
		operator int() const { return m_id; }
		virtual bool estTerminal(){ return false; }
		virtual operator std::string() const = 0;
	protected:
		int m_id;
	private:
};


/*struct Symbole
{
		Symbole(int id) : m_id(id) {}
		Symbole();
		virtual ~Symbole();
		operator int() const { return m_id; }
		virtual bool estTerminal(){return false;}
		virtual std::string toString();

		int m_id;
};*/

#endif // SYMBOLE_H
