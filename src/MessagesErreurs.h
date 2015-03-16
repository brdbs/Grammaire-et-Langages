#ifndef MESSAGESERREURS_H
#define MESSAGESERREURS_H



#include <string>

//const string analyseStatiqueValeurNonConnue ("une valeur dans l'expression a*b n'est pas connue.");

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

		static const string fichierInexistant(string nomFichier){
			return "Erreur a l'ouverture du fichier " + nomFichier;
		}

		static const string doubleDeclaration(string nomVariable){
			return "la variable " + nomVariable + " est deja declaree";
		}

		static const string aSValeurInconnue(string expression){
			return "une valeur dans l'" + expression + " a*b n'est pas connue.";
		}

		static const string aSVariableNonAffectee(string nomVariable){
			return "variable non affectee : " + nomVariable
					+ "variable non utilisee : " nomVariable ;
		}

	protected:
	private:
};

#endif // MESSAGESERREURS_H
