#include <stdio.h>

// Fonction pour remplir un tableau avec des valeurs données par l'utilisateur
// tab[] : le tableau à remplir
// n : le nombre d'éléments à lire
void recup_valeur(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]); // Lire un entier et le stocker dans tab[i]
    }
}

// Fonction pour fusionner deux tableaux dans un troisième
// fusion[] : tableau final contenant les deux autres
// tab1[] : premier tableau à copier
// tab2[] : second tableau à copier
// n1 : taille de tab1
// n2 : taille de tab2
void fusion(int fusion[], int tab1[], int tab2[], int n1, int n2) {
    // Copier les éléments de tab1 dans fusion
    for (int i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }

    // Copier les éléments de tab2 dans fusion (à la suite de tab1)
    for (int j = 0; j < n2; j++) {
        fusion[n1 + j] = tab2[j];
    }
}

int main(void) {
    int nb1, nb2;

    // Lire la taille du premier tableau
    scanf("%d", &nb1);
    int tab1[nb1]; // Déclarer le tableau avec la taille donnée

    // Remplir le premier tableau avec les valeurs de l'utilisateur
    recup_valeur(tab1, nb1);

    // Lire la taille du deuxième tableau
    scanf("%d", &nb2);
    int tab2[nb2]; // Déclarer le deuxième tableau

    // Remplir le deuxième tableau
    recup_valeur(tab2, nb2);

    // Calculer la taille du tableau fusionné (somme des deux tailles)
    int nb3 = nb1 + nb2;
    int tab3[nb3]; // Déclarer le tableau de fusion

    // Fusionner tab1 et tab2 dans tab3
    fusion(tab3, tab1, tab2, nb1, nb2);

    // Afficher le contenu du tableau fusionné
    printf("Tableau fusionné : ");
    for (int i = 0; i < nb3; i++) {
        printf("%d ", tab3[i]);
    }
    printf("\n");

    return 0;
}
