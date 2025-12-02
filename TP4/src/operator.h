#ifndef OPERATOR_H
#define OPERATOR_H

/* Fonctions pour opérations arithmétiques et logiques.
 * Les fonctions prennent deux entiers (pour ~, le second est ignoré).
 */

int op_somme(int a, int b);
int op_difference(int a, int b);
int op_produit(int a, int b);
int op_quotient(int a, int b);   /* division entière, gère b == 0 */
int op_modulo(int a, int b);     /* b == 0 géré */
int op_and(int a, int b);
int op_or(int a, int b);
int op_negation(int a, int b);   /* ~a, b ignoré */

#endif /* OPERATOR_H */
