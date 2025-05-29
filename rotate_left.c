#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int tab[n];

    for (int i = 0; i < n; i++) {
        scanf("%d ", &tab[i]);
    }

    int temp = tab[0];

    for (int i = 0; i < n - 1; i++) {
        tab[i] = tab[i+1];
    }
    
    tab[n - 1] = temp;

    printf("Tableau après rotation : ");
    for(int = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}