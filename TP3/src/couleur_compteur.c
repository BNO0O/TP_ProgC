#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int count;
} Occurrence;

int meme_couleur(Couleur a, Couleur b) {
    return (a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a);
}

int main() {
    Couleur tab[N];
    Occurrence distinct[N];
    int ndist = 0;

    srand(time(NULL));

    // Génération
    for (int i = 0; i < N; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 0xFF;
    }

    // Comptage
    for (int i = 0; i < N; i++) {
        int found = 0;
        for (int j = 0; j < ndist; j++) {
            if (meme_couleur(tab[i], distinct[j].c)) {
                distinct[j].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            distinct[ndist].c = tab[i];
            distinct[ndist].count = 1;
            ndist++;
        }
    }

    // Affichage
    for (int i = 0; i < ndist; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinct[i].c.r, distinct[i].c.g,
               distinct[i].c.b, distinct[i].c.a,
               distinct[i].count);
    }

    return 0;
}
