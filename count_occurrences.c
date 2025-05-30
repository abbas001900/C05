#include <stdio.h>

int main(void) {
    int nbre;

    // Lire le nombre d'éléments que l'utilisateur souhaite entrer
    scanf("%d", &nbre);

    // Déclarer un tableau de taille nbre pour stocker les éléments
    int tab[nbre];

    // Remplir le tableau avec les valeurs saisies par l'utilisateur
    for (int i = 0; i < nbre; i++) {
        scanf("%d", &tab[i]); // Lire un entier et le stocker dans tab[i]
    }

    int nombre;

    // Lire le nombre à rechercher dans le tableau
    scanf("%d", &nombre);

    int compteur = 0; // Initialiser un compteur à 0 pour compter les occurrences

    // Parcourir le tableau pour vérifier combien de fois le nombre apparaît
    for (int i = 0; i < nbre; i++) {
        if (tab[i] == nombre) {
            compteur++; // Incrémenter le compteur chaque fois qu'une correspondance est trouvée
        }
    }

    // Afficher le nombre d'occurrences trouvées
    printf("L'élément %d apparaît %d fois.\n", nombre, compteur);

    return 0; // Fin du programme
}
