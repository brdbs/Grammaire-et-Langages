#include "Identificateur.h"
#include "../Automate.h"

Identificateur::Identificateur(std::string id) : m_id(id)
{
	m_idSymbole = IDENTIFICATEUR;
}

Identificateur::~Identificateur()
{
	//dtor
}

int  Identificateur::calculer(){
	return 0;
}

int* Identificateur::evaluer(Automate *automate) {
	SymboleTable* s = automate->chercherSymbole(m_id);
	if (s->m_connnue)
	{
		return new int(s->m_valeur);
	}
	else
	{
		return NULL;
	}
}

