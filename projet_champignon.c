/** @file projet_champignon.c
 * @brief      fichier source du projet champignon.
 * @author     benjamin Boboul
 *
 *             Le fichier contient du code, c'est déjà bien.
 */
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
	c.effet = 0;
	c.dernierEffet = 0; // nombre de tour depuis le dernier boost.
	return c;
};

struct champignon init_champignon(char type)
{
	struct champignon c;
	c.type = type;
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
	printf("\e[33mStatistiques du cueilleur :\e[0m\n");
	printf("position x: \e[31m%d\e[0m ; position y: \e[31m%d\e[0m\n", c.x, c.y);
	printf("nombre de champignons: \e[31m%d\e[0m\n", c.champignons);
	if (c.effet == 0)
	{
		printf("dernier boost: \e[31mNA\e[0m\n");
	}
	else
	{
		printf("dernier boost: \e[31m%d\e[0m\n", c.effet);
	}
	printf("nombre de tour depuis le boost: \e[31m%d\e[0m\n", c.dernierEffet);
}

void afficherChampignon(struct champignon c)
{
	printf("\e[33mStatistiques du champignon :\e[0m\n");
	printf("type de champignon: \e[31m%c\e[0m\n", c.type);
	printf("position x: \e[31m%d\e[0m ; position y: \e[31m%d\e[0m\n", c.x, c.y);
	printf("ramasse: \e[31m%d\e[0m\n", c.ramasse);
}

void afficherSanglier(struct sanglier c)
{
	printf("\e[33mStatistiques du sanglier :\e[0m\n");
	printf("position x: \e[31m%d\e[0m ; position y: \e[31m%d\e[0m\n", c.x, c.y);
	printf("vitesse de deplacement: \e[31m%d\e[0m\n", c.speed);
}