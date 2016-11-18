/** @file lanceur_projet_champignon.c
 * @brief      fichier principal du projet Champignon.
 * @author     benjamin
 *             
 *             Fichier contenant le programme principal.
 */
#include "projet_champignon.h"
#include <stdlib.h>
#include <time.h>

int main()
{	
	unsigned short int  i;
	srand(time(NULL));

	// struct cueilleur joueur; /*!déclaration de la variable joueur de structure cueilleur. */
	// joueur = init_cueilleur();


	// for (i = 0; i < nbrChampi; ++i)
	// {
	// 	struct champignon champignon[i]; !déclaration de la variable champignon de structure champignon. 
	// 	champignon[i] = init_champignon('b');
	// }

	// for (i = 0; i < nbrSangli; ++i)
	// {
	// 	struct sanglier sanglier[i]; /*!déclaration de la variable sanglier de structure sanglier */
	// 	sanglier[i] = init_sanglier();
	// }

	struct carte map;
	map = init_carte();

	afficherCueilleur(map.joueur); /*!affichage des valeurs de la structure du joueur. */
	for (i = 0; i < nbrChampi; ++i)
	{
		afficherChampignon(map.champignons[i]); /*!affichage des valeurs de la structure du champignon. */
	}
	for ( i = 0; i < nbrSangli; ++i)
	{
		afficherSanglier(map.sangliers[i]); /*!affichage des valeurs de la structure du sanglier. */
		
	}
	
	return 0;
}