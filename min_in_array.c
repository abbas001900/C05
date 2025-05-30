#include <stdio.h>

int main(void) {

    int nbre;

    scanf("%d", &nbre);

    int tab[nbre];
    for (int i = 0; i < nbre; i++)
        scanf("%d", &tab[i]);

    int minimum = tab[0];

    for (int j = 0; j < nbre; j++)
        if (minimum > tab[j])
            minimum = tab[j];

    printf("Le minimum est : %d", minimum);

    return 0;

}