#ifndef OPERATIONMUL_H
#define OPERATIONMUL_H

#include <string>
#include "Terme.h"
#include "Facteur.h"


class OperationMul : public Terme
{
	public:
		OperationMul();
		virtual ~OperationMul();
		virtual operator std::string() const;
		void initialiser(Symbole **, int taille);

		virtual void remplirIdsExpression(vector<string> ids);
	protected:
	private:
		Terme * m_terme;
		std::string m_op;
		Facteur * m_facteur;
};

#endif // OPERATIONMUL_H
