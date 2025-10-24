#include <stdio.h>

int main() {
    int compteur = 5;  // Valeur fixée directement (modifiable si tu veux)

    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else if (i % 2 == 0 && j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
