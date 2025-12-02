#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = " World!";
    char copie[50];
    char concat[100];

    // Calcul longueur
    int len = 0;
    while (s1[len] != '\0')
        len++;

    printf("Longueur : %d\n", len);

    // Copie
    int i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    // Concaténation
    int j = 0;
    i = 0;
    while (s1[i] != '\0') {
        concat[j++] = s1[i++];
    }

    i = 0;
    while (s2[i] != '\0') {
        concat[j++] = s2[i++];
    }

    concat[j] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
