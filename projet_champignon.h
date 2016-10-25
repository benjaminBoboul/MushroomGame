#ifndef __PROJET_CHAMPIGNON_H__
#define __PROJET_CHAMPIGNON_H__

/* structures ============================================================== */
/**
 * Structure de donnés du cueilleur, dispose d'une position x, y, un compteur 
 * à champignons ainsi que d'un état de boost.
 */
struct cueilleur 
{
	int x, y, champignons, boost, dernierBoost;
};

/**
 * Structure de données d'un champignon, le champignon à une position x, y sur 
 * la carte et un compteur pour déterminer le tour auquel il as été ramassé.
 */
struct champignon
{
	char type;
	int x, y, ramasse;
};

/**
 * Structure de données d'un sanglier.
 */
struct sanglier
{
	int x, y, speed;
};

/**
 * Structure de données de la carte, contient un cueilleur, un compteur de 
 * nombre de tours, un tableau de champignons et un tableau de sangliers.
 */
struct carte
{
	struct cueilleur joueur;
	int compteur;
	int champignons[];
};

/* structures fonctions ==================================================== */
/**
 * Fonction permettant d'initialiser un cueilleur (structure), la position 
 * initiale est définie aléatoirement.
 * Exemple d'utilisation: struct cueilleur c; c=init_cueilleur();
 */
struct cueilleur init_cueilleur();

/**
 * Fonction permettant d'initialiser un champignon (structure), la position 
 * initiale est définie aléatoirement. Le type du champignon est représenté 
 * par un caractère pouvant avoir la valeur 'n' pour normal, 'b' pour boost et 
 * 'e' pour empoisonné.
 * Exemple d'utilisation: struct champignon champ; champ=init_champignons(char 
 * type);
 */
struct champignon init_champignon();

/**
 * Fonction permettant d’initialiser un sanglier (structure), la position
 * initiale et la vitesse de déplacement sont définies aléatoirement.
 * Exemple d’utilisation: struct sangliers;c=init_sanglier();
 */
struct sanglier init_sanglier();


/* fonctions =============================================================== */
/**
 * La fonction aleatoire retourne un entier généré de manière pseudo-aléatoire 
 * compris entre 0 et la valeur de son paramètre. Pour initialiser le 
 * générateur pseudo-aléatoire, il faut ajouter l’instruction srand(time(
 * NULL)); au début de la fonction main et inclure les librairies time.h et 
 * stdlib.h.
 */
unsigned int aleatoire(unsigned int limite);


/* procédures ============================================================== */
/**
 * Affiche l'ensemble des données du joueur
 * @param joueur structure du joueur.
 */
void afficherCueilleur(struct cueilleur c);

/**
 * Affiche l'ensemble des données d'un champignon.
 * @param c structure du champignon.
 */
void afficherChampignon(struct champignon c);

/**
 * Affiche l'ensemble des données d'un sanglier.
 * @param c structure du sanglier.
 */
void afficherSanglier(struct sanglier c);

#endif