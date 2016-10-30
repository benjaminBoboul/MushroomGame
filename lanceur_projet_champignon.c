#include "projet_champignon.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	// initialisation du joueur (cueilleur).
	struct cueilleur joueur;
	joueur = init_cueilleur();

	// initialisation du champignon.
	struct champignon champignon;
	champignon = init_champignon();

	// initialisation du sanglier.
	struct sanglier sanglier;
	sanglier = init_sanglier();

	afficherCueilleur(joueur); // affiche les stats du joueur.
	afficherChampignon(champignon); // affiche les stats du champignon.
	afficherSanglier(sanglier); // affiche les stats du sanglier.

	return 0;
}