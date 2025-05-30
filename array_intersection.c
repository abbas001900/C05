#include <stdio.h>


int main() {
    
    int nbre1;


    scanf("%d", &nbre1);

    int tab1[nbre1];

    for (int i = 0; i < nbre1; i++)
        scanf("%d", &tab1[i]);


    int nbre2;

    scanf("%d", &nbre2);

    int tab2[nbre2];
    
    for (int i = 0; i < nbre2; i++)
        scanf("%d", &tab2[i]);


    // Affichage du résultat
    printf("Intersection : ");

    for (int i = 0; i < nbre1; i++)
        for (int j = 0; j < nbre2; j++) 
            if (tab1[i] == tab2[j])
                printf("%d ", tab1[i]);

    printf("\n");


    return 0;
}
