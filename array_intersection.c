#include <stdio.h>


int main() {
    
    int n;


    scanf("%d", &n);

    int tab1[n];

    for (int i = 0; i < nbre1; i++) {
        scanf("%d", &tab1[i]);
    }


    int m;

    scanf("%d", &m);

    int tab2[m];
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    // Affichage du résultat
    printf("Intersection : ");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                printf("%d ", tab1[i]);
            }
        }
    }

    printf("\n");


    return 0;
}
