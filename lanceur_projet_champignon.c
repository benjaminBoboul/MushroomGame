/** @file lanceur_projet_champignon.c
 * @brief      fichier principal du projet Champignon.
 * @author     benjamin Fichier contenant le programme principal.
 */
#include "projet_champignon.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	struct cueilleur joueur; /*!déclaration de la variable joueur de structure cueilleur. */
	joueur = init_cueilleur();

	struct champignon champignon; /*!déclaration de la variable champignon de structure champignon. */
	champignon = init_champignon('n');

	struct sanglier sanglier; /*!déclaration de la variable sanglier de structure sanglier */
	sanglier = init_sanglier();

	afficherCueilleur(joueur);/*!affichage des valeurs de la structure du joueur. */
	afficherChampignon(champignon); /*!affichage des valeurs de la structure du champignon. */
	afficherSanglier(sanglier); /*!affichage des valeurs de la structure du sanglier. */

	return 0;
}