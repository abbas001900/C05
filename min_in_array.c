#include <stdio.h>

int main(void) {
    int nbre;

    // Lire le nombre d'éléments que l'utilisateur va entrer
    scanf("%d", &nbre);

    // Déclarer un tableau de taille nbre
    int tab[nbre];

    // Lire les valeurs à stocker dans le tableau
    for (int i = 0; i < nbre; i++)
        scanf("%d", &tab[i]);

    // Initialiser la variable minimum avec le premier élément du tableau
    int minimum = tab[0];

    // Parcourir le tableau pour trouver la plus petite valeur
    for (int j = 0; j < nbre; j++) {
        if (minimum > tab[j]) {
            minimum = tab[j]; // Mettre à jour le minimum si on trouve plus petit
        }
    }

    // Afficher le minimum trouvé
    printf("Le minimum est : %d", minimum);

    return 0; // Fin du programme
}
