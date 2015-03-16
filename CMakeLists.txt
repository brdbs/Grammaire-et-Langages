cmake_minimum_required(VERSION 2.6)



#Déclaration du projet
project("Interpreteur")

#Inclusion de Boost.regex pour les expressions régulières
include(FindBoost)
find_package(
	Boost
	1.54.0
	REQUIRED regex
)
link_directories(${Boost_LIBRARY_DIRS})

include_directories(${Boost_INCLUDE_DIRS})

#Génération de la liste des fichiers sources
file(
	GLOB_RECURSE
	source_files
	src/*
)

ADD_DEFINITIONS(
	-std=c++11 # Or -std=c++0x
	# Other flags
)

#Déclaration de l'exécutable
add_executable(
	lut
	${source_files}
)
