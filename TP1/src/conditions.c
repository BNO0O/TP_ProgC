#include <stdio.h>

int main() {
    int somme = 0;

    // Boucle de 1 à 1000
    for (int i = 1; i <= 1000; i++) {

        // Si le nombre est divisible par 11, on saute cette itération
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 ou 7, on l’ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête la boucle immédiatement
        if (somme > 5000) {
            printf("La somme a dépassé 5000 au nombre %d.\n", i);
            break;
        }
    }

    // Affichage du résultat final
    printf("Somme finale = %d\n", somme);

    return 0;
}
