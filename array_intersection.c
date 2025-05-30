#include <stdio.h>


int main() {
    
    int n;

    // Recuperation du nombre d'elements du premier tableau
    scanf("%d", &n);

    // Declaration du premier tableau
    int tab1[n];

    // Recuperation des valeurs du premier tableau
    for (int i = 0; i < nbre1; i++) {
        scanf("%d", &tab1[i]);
    }

    // Declaration du nombre d'elements du second tableau
    int m;

    // Recuperation du nombre d'elemnts du second tableau
    scanf("%d", &m);

    // Declaration du second tableau
    int tab2[m];
    
    // Recuperation des valeurs du second tableau
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    // Affichage du résultat
    printf("Intersection : ");

    // Comparaison pour recuperation des valeurs communes entre les deux tableaux
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            if (tab1[i] == tab2[j]) {

                printf("%d ", tab1[i]);
            }
        }
    }

    // Fin de la ligne
    printf("\n");


    return 0;
}
