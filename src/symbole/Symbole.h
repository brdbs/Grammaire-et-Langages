#ifndef SYMBOLE_H
#define SYMBOLE_H


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
