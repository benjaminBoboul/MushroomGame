# Projet Champignon - 2016
__IUT Réseau et Télécom__
> projet par Benjamin et Maeg

	Le fichier Make s'occupe de générer de la doc

## Partie 1
> Conception du jeu

Le jeu à pour objectif la cueillette de champignon:  
Le joueur est un cueilleur qui se déplace sur un plateau afin de récolter des champignons tout en évitant les dangers.

Les différentes entités sur le plateau de jeu sont:  
* Le cueilleur
    Personnage que l'on déplace sur des axes x et y dans un tableau pouvant bénéficier d'effets de la part des champignons qu'il ramasse.
* Le champignon
    Entité que le cueilleur ramasse ou que les sangliers piétinent, il reste fixe. Peut affecter différents effets au cueilleur.
* Le sanglier
    Sa vitesse peut varier de 1 à 2 cases par tour. Lorsqu'il passe sur un champignon ce dernier est alors piétiné.