#include "projet_champignon.h"
// #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	int nombreChampignons = 1; // on déclare le nombre maximum de champignons que l'on souhaite.
	int nombreSangliers = 1; // on déclare le nombre maximum de sangliers que l'on souhaite.

	// initialisation du joueur (cueilleur)
	struct cueilleur joueur;
	joueur = init_cueilleur();

	// initialisation des champignons (dépends de nombreChampignons)
	struct champignon champignon[nombreChampignons];
	for (int i = 0; i < nombreChampignons; ++i)
	{
		champignon[i] = init_champignon();
		afficherChampignon(champignon[i]); // affiche les stats de chaque champignon.
	}

	// initialisation des sangliers (dépends de nombreSangliers)
	struct sanglier sanglier[nombreSangliers];
	for (int i = 0; i < nombreSangliers; ++i)
	{
		sanglier[i] = init_sanglier();
		afficherSanglier(sanglier[i]); // affiche les stats de chaque sanglier.
	}

	afficherCueilleur(joueur); // affiche les stats du joueur.

	exit(0);
}