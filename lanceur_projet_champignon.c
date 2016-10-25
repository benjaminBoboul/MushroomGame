#include "projet_champignon.h"
// #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	int nombreChampignons = 1;
	int nombreSanglier = 1;

	struct cueilleur joueur;
	joueur = init_cueilleur();

	struct champignon champignon[nombreChampignons];
	for (int i = 0; i < nombreChampignons; ++i)
	{
		champignon[i] = init_champignon();
		afficherChampignon(champignon[i]);
	}

	struct sanglier sanglier[nombreSanglier];
	for (int i = 0; i < nombreSanglier; ++i)
	{
		sanglier[i] = init_sanglier();
		afficherSanglier(sanglier[i]);
	}

	afficherCueilleur(joueur);

	exit(0);
}