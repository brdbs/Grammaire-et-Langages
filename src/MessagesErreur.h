/*
 * Destiné à contenir l'ensemble des messages d'erreurs que peut renvoyer le programme
 */

#include <string>

const string NoArgument = "Erreur, veuillez specifier des arguments\n
  Utilisation :\n
    ../lut [-p] [-a] [-e] [-o] source.lt\n
      [-p] affiche le code source reconnu\n
      [-a] analyse le programme de maniere statique\n
      [-e] execute interactivement le programme\n
      [-o] optimise les expressions et instructions\n";
