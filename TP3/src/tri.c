#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        tab[i] = rand() % 200 - 100;

    printf("Tableau non trié :\n");
    for (int i = 0; i < N; i++) printf("%d ", tab[i]);
    printf("\n\n");

    // Tri à bulles
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++)
            if (tab[j] > tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }

    printf("Tableau trié :\n");
    for (int i = 0; i < N; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
