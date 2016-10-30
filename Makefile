all: doc code

doc:
	@echo -e "generating documentation"
	doxygen .doxygen

code:
	@echo -e "\e[34m<===== Compiling... =====>\e[0m"
	gcc -W -Wall -o "lanceur_projet_champignon.exe" "projet_champignon.c" "lanceur_projet_champignon.c"