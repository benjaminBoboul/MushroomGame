/** @file projet_champignon.h
 * @brief      Header du projet Champignon.
 * @author     benjamin
 *
 *             Le fichier contient les déclarations des structures, fonctions et
 *             procédures.
 */
#ifndef __PROJET_CHAMPIGNON_H__
#define __PROJET_CHAMPIGNON_H__

/* structures ============================================================== */
/**
 * @brief      Structure de donnés du cueilleur, dispose d'une position x, y, un
 *             compteur à champignons ainsi que d'un état d'effet.
 */
struct cueilleur 
{
	unsigned int x, y, champignons, dernierEffet;
	unsigned char effet;
};

/**
 * @brief      Structure de données d'un champignon, le champignon à une
 *             position x, y sur la carte et un compteur pour déterminer le tour
 *             auquel il as été ramassé.
 */
struct champignon
{
	char type;
	unsigned int x, y;
	int ramasse;
};

/**
 * @brief      Structure de données d'un sanglier.
 */
struct sanglier
{
	unsigned int x, y, speed;
};

/**
 * @brief      Structure de données de la carte, contient un cueilleur, un
 *             compteur de nombre de tours, un tableau de champignons et un
 *             tableau de sangliers.
 */
struct carte
{
	struct cueilleur joueur;
	int compteur;
	int champignons[100][100];
	int sangliers[100][100];
};

/* structures fonctions ==================================================== */
/**
 * @brief      Fonction permettant d'initialiser un cueilleur (structure), la
 *             position initiale est définie aléatoirement.
 *
 *             Exemple d'utilisation: struct cueilleur c; c=init_cueilleur();
 *
 * @return     struct cueilleur
 */
struct cueilleur init_cueilleur();

/**
 * @brief      Fonction permettant d’initialiser un champignon (structure), la
 *             position initiale est définie aléatoirement. Le type du
 *             champignon est représenté par un caractère pouvant avoir la
 *             valeur ‘n’ pour normal, ‘b’ pour boost et ‘e’ pour empoisonné.
 *
 *             Exemple d'utilisation : struct champignon champ; champ=
 *             init_champignon(char type);
 *
 * @return     struct champignon
 */



struct champignon init_champignon(char type);

/**
 * @brief      Fonction permettant d’initialiser un sanglier (structure), la
 *             position initiale et la vitesse de déplacement sont définies
 *             aléatoirement.
 *
 *             Exemple d’utilisation: struct sangliers;c=init_sanglier();
 *
 * @return     struct champignon
 */
struct sanglier init_sanglier();


/* fonctions =============================================================== */
/**
 * @brief      La fonction aleatoire retourne un entier généré de manière
 *             pseudo-aléatoire compris entre 0 et la valeur de son paramètre.
 *             Pour initialiser le générateur pseudo-aléatoire, il faut ajouter
 *             l’instruction srand(time( NULL)); au début de la fonction main et
 *             inclure les librairies time.h et stdlib.h.
 *
 * @param[in]  limite  Entier qui définis la limite a ne pas dépasser.
 *
 * @return     entier non signé.
 */
unsigned int aleatoire(unsigned int limite);


/* procédures ============================================================== */
/**
 * @brief      Affiche l'ensemble des données du joueur
 *
 * @param[in]  c     struct cueilleur du joueur.
 */
void afficherCueilleur(struct cueilleur c);

/**
 * @brief      Affiche l'ensemble des données d'un champignon.
 *
 * @param[in]  c     struct champignon du champignon.
 */
void afficherChampignon(struct champignon c);

/**
 * @brief      Affiche l'ensemble des données d'un sanglier.
 *
 * @param[in]  c     struct sanglier du sanglier.
 */
void afficherSanglier(struct sanglier c);

#endif