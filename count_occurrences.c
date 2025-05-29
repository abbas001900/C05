#include <stdio.h>

int main(void) {

    int nbre;
    scanf("%d", &nbre);

    int tab[nbre];
    for (int i = 0; i < nbre; i++) {
        scanf("%d", &tab[i]);
    }

    int nombre;
    scanf("%d", &nombre);

    int compteur = 0;
    for (int i = 0; i < nbre; i++) {
        if (tab[i] == nombre)
            compteur++;
    }

    printf("L'élément %d apparaît %d fois.\n", nombre, compteur);

    return 0;
}
