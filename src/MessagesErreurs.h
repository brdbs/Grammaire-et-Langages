#ifndef MESSAGESERREURS_H
#define MESSAGESERREURS_H

#include <string>
#include <iostream>
using namespace std;

#define ATTENDU_VIRGPOINTVIRG 1
#define ATTENDU_EGAL 2
#define ATTENDU_VALEUR 4
#define ATTENDU_OPERATEUR 8

/*
 * Destiné à contenir l'ensemble des messages d'erreurs que peut renvoyer le programme
 */
class MessagesErreurs
{
	public:
		MessagesErreurs() {}
		virtual ~MessagesErreurs() {}

		static void NoArgument (){
			cerr << "Erreur, veuillez specifier des arguments\n"
				 "\tUtilisation :\n"
				"\t\t../lut [-p] [-a] [-e] [-o] source.lt\n"
				"\t\t\t[-p] affiche le code source reconnu\n"
				"\t\t\t[-a] analyse le programme de maniere statique\n"
				"\t\t\t[-e] execute interactivement le programme\n"
				"\t\t\t[-o] optimise les expressions et instructions\n";
		}

		static void Erreur(string description){
			cerr << "Erreur : " << description;
		}

		static void FichierInexistant(string nomFichier){
			cerr << "Erreur a l'ouverture du fichier " << nomFichier;
		}

		static void IdentificateurNonDeclare(){
			cerr << "Identificateur requis";
		}

		static void DoubleDeclaration(string nomVariable){
			cerr << "la variable " << nomVariable << " est deja declaree";
		}

		static void ConstanteNonModifiable(string nomVariable){
			cerr << "la variable " << nomVariable << " est deja declaree";
		}

		static void ASValeurInconnue(string expression){
			cerr << "une valeur dans l'" << expression
					<< " n'est pas connue.";
		}

		static void ASVariableNonAffectee(string nomVariable){
			cerr <<"variable non affectee : " << nomVariable
					<< "variable non utilisee : " << nomVariable;
		}

		static void ASVariableNonDeclaree(string nomVariable){
			cerr << "la variable " << nomVariable << " n'a pas ete declaree.";
		}

		static void ErreurLexicale(int ligne, int colonne){
			cerr <<"Erreur lexicale (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") caractere _";
		}

		static void ErreurLexicale(int ligne, int colonne, int nature){
			switch(nature){
			case ATTENDU_VIRGPOINTVIRG:
				cerr << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") symbole , ou ; attendu";
				return;
			case ATTENDU_EGAL:
				cerr << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") symbole = attendu";
				return;
			case ATTENDU_VALEUR:
				cerr << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") valeur attendue";
				return;
			case ATTENDU_OPERATEUR:
				cerr << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") operateur := attendu";
				return;
			}
		}

	protected:
	private:
};

#endif // MESSAGESERREURS_H
