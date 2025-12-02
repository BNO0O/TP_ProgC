#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main() {
    int tab[N];
    int x, debut = 0, fin = N - 1, milieu, trouve = 0;

    // Tableau trié automatiquement
    for (int i = 0; i < N; i++)
        tab[i] = i * 2;

    printf("Tableau trié :\n");
    for (int i = 0; i < N; i++) printf("%d ", tab[i]);
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &x);

    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        if (tab[milieu] == x) {
            trouve = 1;
            break;
        }
        else if (tab[milieu] < x)
            debut = milieu + 1;
        else
            fin = milieu - 1;
    }

    if (trouve) printf("entier présent\n");
    else printf("entier absent\n");

    return 0;
}
