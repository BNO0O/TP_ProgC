#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int x, found = 0;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        tab[i] = rand() % 200 - 100;

    printf("Tableau :\n");
    for (int i = 0; i < N; i++) printf("%d ", tab[i]);
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    for (int i = 0; i < N; i++) {
        if (tab[i] == x) {
            found = 1;
            break;
        }
    }

    if (found) printf("entier présent\n");
    else printf("entier absent\n");

    return 0;
}
