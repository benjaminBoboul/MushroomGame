#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "projet_champignon.h"

/* fonctions =============================================================== */
unsigned int aleatoire(unsigned int limite)
{
	return (rand() % limite);
}

/* structures fonctions ==================================================== */
struct cueilleur init_cueilleur()
{
	struct cueilleur c;
	c.x = aleatoire(100);
	c.y = aleatoire(100);
	c.champignons = 0;
	c.boost = 0;
	c.dernierBoost = 0; // nombre de tour depuis le dernier boost.
	return c;
};

struct champignon init_champignon()
{
	struct champignon c;
	c.type = 'n';
	c.x = aleatoire(100);
	c.y = aleatoire(100);
	c.ramasse = -1;
	return c;
};

struct sanglier init_sanglier()
{
	struct sanglier c;
	c.x = aleatoire(100);
	c.y = aleatoire(100);
	c.speed = aleatoire(2);
	return c;
};

/* procédures ============================================================== */
void afficherCueilleur(struct cueilleur c)
{
	printf("\e[34mStatistiques du cueilleur :\e[0m\n");
	printf("position x: %d ; position y: %d\n", c.x, c.y);
	printf("nombre de champignons: %d\n", c.champignons);
	printf("dernier boost: %c\n", c.boost);
	printf("nombre de tour depuis le boost: %d\n", c.dernierBoost);
}

void afficherChampignon(struct champignon c)
{
	printf("\e[34mStatistiques du champignon :\e[0m\n");
	printf("type de champignon: %c\n", c.type);
	printf("position x: %d ; position y: %d\n", c.x, c.y);
	printf("ramasse: %d\n", c.ramasse);
}

void afficherSanglier(struct sanglier c)
{
	printf("\e[34mStatistiques du sanglier :\e[0m\n");
	printf("position x: %d ; position y: %d\n", c.x, c.y);
	printf("vitesse de deplacement: %d\n", c.speed);
}