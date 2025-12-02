#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int min, max;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
        tab[i] = rand() % 1000 + 1;

    min = max = tab[0];

    for (int i = 1; i < N; i++) {
        if (tab[i] < min) min = tab[i];
        if (tab[i] > max) max = tab[i];
    }

    printf("Le numéro le plus petit est : %d\n", min);
    printf("Le numéro le plus grand est : %d\n", max);

    return 0;
}
