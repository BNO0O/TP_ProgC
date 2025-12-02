#include "operator.h"
#include <stdio.h>

int op_somme(int a, int b) {
    return a + b;
}

int op_difference(int a, int b) {
    return a - b;
}

int op_produit(int a, int b) {
    return a * b;
}

int op_quotient(int a, int b) {
    if (b == 0) {
        /* Convention : afficher erreur et retourner 0 */
        fprintf(stderr, "Erreur: division par zero\n");
        return 0;
    }
    return a / b;
}

int op_modulo(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Erreur: modulo par zero\n");
        return 0;
    }
    return a % b;
}

int op_and(int a, int b) {
    return a & b;
}

int op_or(int a, int b) {
    return a | b;
}

int op_negation(int a, int b) {
    (void)b; /* second param non utilisé */
    return ~a;
}
