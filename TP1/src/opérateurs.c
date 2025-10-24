#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // --- Opérateurs arithmétiques ---
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;  // Division entière
    int modulo = a % b;    // Reste de la division entière

    // --- Opérateurs logiques (comparaisons) ---
    int egal = (a == b);   // vrai (1) si a == b, sinon faux (0)
    int superieur = (a > b);

    // --- Affichage des résultats ---
    printf("=== Opérateurs arithmétiques et logiques ===\n\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("Addition (a + b) = %d\n", addition);
    printf("Soustraction (a - b) = %d\n", soustraction);
    printf("Multiplication (a * b) = %d\n", multiplication);
    printf("Division (a / b) = %d\n", division);
    printf("Modulo (a %% b) = %d\n\n", modulo);

    printf("a == b ? %d\n", egal);
    printf("a > b ? %d\n", superieur);

    return 0;
}
