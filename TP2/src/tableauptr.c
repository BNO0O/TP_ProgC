#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ti[11];
    float tf[11];

    srand(time(NULL));

    // Remplissage
    int *pi = ti;
    float *pf = tf;

    for (int i = 0; i < 11; i++) {
        *(pi + i) = rand() % 100;
        *(pf + i) = (rand() % 1000) / 10.0;
    }

    // Avant
    printf("Int avant : ");
    for (int i = 0; i < 11; i++)
        printf("%d ", *(pi + i));
    printf("\n");

    printf("Float avant : ");
    for (int i = 0; i < 11; i++)
        printf("%.2f ", *(pf + i));
    printf("\n");

    // Multiplication indices pairs
    for (int i = 0; i < 11; i += 2) {
        *(pi + i) *= 3;
        *(pf + i) *= 3;
    }

    // Après
    printf("Int après : ");
    for (int i = 0; i < 11; i++)
        printf("%d ", *(pi + i));
    printf("\n");

    printf("Float après : ");
    for (int i = 0; i < 11; i++)
        printf("%.2f ", *(pf + i));
    printf("\n");

    return 0;
}
