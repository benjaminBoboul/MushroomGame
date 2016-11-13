all: doc code

doc:
	@echo -e "generating documentation"
	doxygen .doxygen
	@echo -e "\e[33mfor generate pdf please execute the makefile in documentation/latex\e[0m"

code:
	@echo -e "\e[34m<===== Compiling... =====>\e[0m"
	gcc -W -Wall -o "lanceur_projet_champignon.exe" "projet_champignon.c" "lanceur_projet_champignon.c"