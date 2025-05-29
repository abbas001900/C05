#include <stdio.h>

// Remplit un tableau avec des valeurs saisies
void recup_valeur(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
}

// Remplit le tableau inter[] avec les éléments communs à tab1 et tab2
// Retourne le nombre d'éléments dans l'intersection
void intersection(int tab1[], int tab2[], int n1, int n2, int inter[]) {
    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {  // Corrigé ici
            if (tab1[i] == tab2[j]) {
                printf("%d ", tab1[i]);
            }
        }
    }
}

int main(void) {
    int n1, n2;
    scanf("%d", &n1);
    int tab1[n1];
    recup_valeur(tab1, n1);

    scanf("%d", &n2);
    int tab2[n2];
    recup_valeur(tab2, n2);

    int inter[n1 < n2 ? n1 : n2];  // Taille maximale possible de l'intersection
    intersection(tab1, tab2, n1, n2, inter);

    printf("\n");

    return 0;
}
