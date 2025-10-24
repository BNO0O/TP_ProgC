#include <stdio.h>

int main() {
    // Les nombres à tester
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    // Parcours de chaque nombre à afficher
    for (int n = 0; n < taille; n++) {
        int nombre = nombres[n];

        printf("Nombre : %d\n", nombre);
        printf("Binaire : ");

        // Affichage bit par bit (du bit le plus significatif au moins significatif)
        int taille_bits = sizeof(int) * 8; // généralement 32 bits
        int bit_affiche = 0; // pour éviter les zéros non significatifs

        for (int i = taille_bits - 1; i >= 0; i--) {
            int bit = (nombre >> i) & 1; // Décale et isole le bit
            if (bit == 1)
                bit_affiche = 1;

            // Affiche les bits seulement après le premier '1'
            if (bit_affiche)
                printf("%d", bit);
        }

        // Si le nombre vaut 0, il faut afficher "0"
        if (nombre == 0)
            printf("0");

        printf("\n\n");
    }

    return 0;
}
