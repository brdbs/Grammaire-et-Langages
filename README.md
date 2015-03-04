# Grammaire-et-Languages

Tuto sur lequel se baser pour cmake : http://florian-goujeon.developpez.com/cours/cmake/initiation/#LI-C

Sous linux (pour l'instant seule plateforme que j'ai testé - Jérôme) :
Dans la racine du git : "cmake --help"
Cette commande revoie sur sa fin une liste des générateurs disponibles sur le système. Il faut en choisir un dans la commande suivante pour l'IDE que l'on veut utiliser.
exemple : "cmake -G "CodeBlocks - Unix Makefiles""
Il va alors générer le ou les makefiles selon les paramètre situés dans CMakeLists.txt

PAr la suite, utiliser le make classiquement et refaire cmake lorsque l'on crée/supprime/renomme de nouveaux fichier
