#include <stdio.h>


int main() {
    int n1, n2;


    scanf("%d", &n1);

    int tab1[n1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }


    scanf("%d", &n2);

    int tab2[n2];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab2[i]);
    }


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
