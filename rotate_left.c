#include <stdio.h>

int main(void) {
    int n;

    // Demander à l'utilisateur combien d'éléments il souhaite entrer
    // et lire cette valeur depuis l'entrée standard
    scanf("%d", &n);

    // Déclarer un tableau de taille n pour stocker les éléments
    // (C99 permet les tableaux de taille variable comme ici)
    int tab[n];

    // Lire les n entiers un par un et les stocker dans le tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Sauvegarder le premier élément du tableau,
    // car il sera écrasé lors du décalage
    int temp = tab[0];

    // Effectuer un décalage vers la gauche :
    // chaque élément prend la valeur de l’élément suivant
    for (int i = 0; i < n - 1; i++) {
        tab[i] = tab[i + 1];
    }

    // Placer l’ancien premier élément (sauvegardé dans temp)
    // à la fin du tableau pour compléter la rotation
    tab[n - 1] = temp;

    // Afficher le tableau après la rotation vers la gauche
    printf("Tableau après rotation : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    // Terminer proprement le programme
    return 0;
}
