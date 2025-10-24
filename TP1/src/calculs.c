

#include <stdio.h>

int main() {
    int num1 = 16;
    int num2 = 3;
    char op = '+';  // Modifie cette valeur pour tester d'autres opérateurs

    int resultat;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("op = '%c'\n\n", op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Addition : %d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Soustraction : %d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Multiplication : %d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Division entière : %d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("Modulo : %d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("ET binaire : %d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("OU binaire : %d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            printf("NON binaire sur num1 : ~%d = %d\n", num1, ~num1);
            printf("NON binaire sur num2 : ~%d = %d\n", num2, ~num2);
            break;

        default:
            printf("Erreur : opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}
