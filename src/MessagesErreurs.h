#ifndef MESSAGESERREURS_H
#define MESSAGESERREURS_H

#include <string>
using namespace std;

#define ATTENDU_VIRGPOINTVIRG 1
#define ATTENDU_EGAL 2
#define ATTENDU_VALEUR 3
#define ATTENDU_OPERATEUR 4

/*
 * Destiné à contenir l'ensemble des messages d'erreurs que peut renvoyer le programme
 */
class MessagesErreurs
{
	public:
		MessagesErreurs() {}
		virtual ~MessagesErreurs() {}

		static const string NoArgument (){
			return "Erreur, veuillez specifier des arguments\n"
				 "\tUtilisation :\n"
				"\t\t../lut [-p] [-a] [-e] [-o] source.lt\n"
				"\t\t\t[-p] affiche le code source reconnu\n"
				"\t\t\t[-a] analyse le programme de maniere statique\n"
				"\t\t\t[-e] execute interactivement le programme\n"
				"\t\t\t[-o] optimise les expressions et instructions\n";
		}

		static const string FichierInexistant(string nomFichier){
			return "Erreur a l'ouverture du fichier " + nomFichier;
		}

		static const string DoubleDeclaration(string nomVariable){
			return "la variable " + nomVariable + " est deja declaree";
		}

		static const string ASValeurInconnue(string expression){
			return "une valeur dans l'" + expression + " n'est pas connue.";
		}

		static const string ASVariableNonAffectee(string nomVariable){
			return "variable non affectee : " + nomVariable
					+ "variable non utilisee : " + nomVariable ;
		}

		static const string ASVariableNonDeclaree(string nomVariable){
			return "la variable " + nomVariable + " n'a pas ete declaree.";
		}

		static const string ErreurLexicale(int ligne, int colonne){
			return "Erreur lexicale (" + to_string(ligne) + ":" + to_string(colonne) + ") caractere _";
		}

		static const string ErreurLexicale(int ligne, int colonne, int nature){
			switch(nature){
			case ATTENDU_VIRGPOINTVIRG:
				return "Erreur syntaxique (" + to_string(ligne) + ":" + to_string(colonne) + ") symbole , ou ; attendu";
			case ATTENDU_EGAL:
				return "Erreur syntaxique (" + to_string(ligne) + ":" + to_string(colonne) + ") symbole = attendu";
			case ATTENDU_VALEUR:
				return "Erreur syntaxique (" + to_string(ligne) + ":" + to_string(colonne) + ") valeur attendue";
			case ATTENDU_OPERATEUR:
				return "Erreur syntaxique (" + to_string(ligne) + ":" + to_string(colonne) + ") operateur := attendu";
			}
		}

	protected:
	private:
};

#endif // MESSAGESERREURS_H
