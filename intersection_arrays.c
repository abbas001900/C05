#include <stdio.h>

int main() {
    int n, m;

    // Lire la taille du premier tableau
    scanf("%d", &n);
    int tab1[n]; // Déclarer tab1 avec la taille lue

    // Remplir le premier tableau avec les entrées de l'utilisateur
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &m);
    int tab2[m]; // Déclarer tab2 avec la taille lue

    // Remplir le deuxième tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    // Afficher les éléments présents dans les deux tableaux (intersection)
    printf("Intersection : ");
    for (int i = 0; i < n; i++) {

        // Étape 1 : vérifier si tab1[i] existe dans tab2
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                found = 1; // L'élément existe dans tab2
                break;     // Inutile de continuer à chercher
            }
        }

        // Étape 2 : éviter d’afficher plusieurs fois le même élément
        // en vérifiant s’il a déjà été affiché (donc s’il est apparu plus tôt dans tab1)
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (tab1[i] == tab1[k]) {
                deja_affiche = 1; // L'élément a déjà été traité
                break;
            }
        }

        // Si l'élément est dans tab2 et pas encore affiché, on l'affiche
        if (found && !deja_affiche) {
            printf("%d ", tab1[i]);
        }
    }

    printf("\n"); // Nouvelle ligne après l’affichage final

    return 0;
}
