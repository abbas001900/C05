#include <stdio.h>

void recup_valeur(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
}

void fusion(int fusion[], int tab1[], int tab2[], int n1, int n2) {
    for (int i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }
    for (int j = 0; j < n2; j++) {
        fusion[n1 + j] = tab2[j];
    }
}

int main(void) {
    int nb1, nb2;

    // Lire les tailles
    scanf("%d", &nb1);
    int tab1[nb1];

    recup_valeur(tab1, nb1);

    scanf("%d", &nb2);
    int tab2[nb2];

    recup_valeur(tab2, nb2);

    int nb3 = nb1 + nb2;
    int tab3[nb3];

    // Fusionner
    fusion(tab3, tab1, tab2, nb1, nb2);

    // Afficher le tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < nb3; i++) {
        printf("%d ", tab3[i]);
    }
    printf("\n");

    return 0;
}
