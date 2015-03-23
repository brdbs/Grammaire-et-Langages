#ifndef MESSAGESERREURS_H
#define MESSAGESERREURS_H

#include <string>
#include <sstream>
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

		static const string Erreur(string description){
			std::stringstream ss;
			ss << "Erreur : " << description;
			return ss.str();
		}
		
		static const string FichierInexistant(string nomFichier){
			std::stringstream ss;
			ss << "Erreur a l'ouverture du fichier " << nomFichier;
			return ss.str();
		}

		static const string DoubleDeclaration(string nomVariable){
			std::stringstream ss;
			ss << "la variable " << nomVariable << " est deja declaree";
			return ss.str();
		}

		static const string ASValeurInconnue(string expression){
			std::stringstream ss;
			ss << "une valeur dans l'" << expression 
					<< " n'est pas connue.";
			return ss.str();
		}

		static const string ASVariableNonAffectee(string nomVariable){
			std::stringstream ss;
			ss <<"variable non affectee : " << nomVariable
					<< "variable non utilisee : " << nomVariable;
			return ss.str();
		}

		static const string ASVariableNonDeclaree(string nomVariable){
			std::stringstream ss;
			ss << "la variable " << nomVariable << " n'a pas ete declaree.";
			return ss.str();
		}

		static const string ErreurLexicale(int ligne, int colonne){
			std::stringstream ss;
			ss <<"Erreur lexicale (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") caractere _";
			return ss.str();
		}

		static const string ErreurLexicale(int ligne, int colonne, int nature){
			std::stringstream ss;
			switch(nature){
			case ATTENDU_VIRGPOINTVIRG:
				ss << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") symbole , ou ; attendu";
				return ss.str();
			case ATTENDU_EGAL:
				ss << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") symbole = attendu";
				return ss.str();
			case ATTENDU_VALEUR:
				ss << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") valeur attendue";
				return ss.str();
			case ATTENDU_OPERATEUR:
				ss << "Erreur syntaxique (" << std::to_string(ligne) << ":" << std::to_string(colonne) << ") operateur := attendu";
				return ss.str();
			}
		}

	protected:
	private:
};

#endif // MESSAGESERREURS_H
