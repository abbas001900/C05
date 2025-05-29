#include <stdio.h>

// Remplit un tableau avec des valeurs saisies
void recup_valeur(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
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


    // Affichage du résultat
    printf("Intersection : ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) { 
            if (tab1[i] == tab2[j]) {
                printf("%d ", tab1[i]);
            }
        }
    }

    printf("\n");

    
    return 0;
}
