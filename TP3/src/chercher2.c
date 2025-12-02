#include <stdio.h>

int compare(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == b[i]); // vrai seulement si fin des deux chaînes
}

int main() {
    char phrases[10][100] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[100];

    printf("Entrez la phrase a rechercher :\n");
    fgets(recherche, 100, stdin);

    // Retirer le \n éventuel
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') recherche[i] = '\0';
        i++;
    }

    for (int i = 0; i < 10; i++) {
        if (compare(recherche, phrases[i])) {
            printf("Phrase trouvée\n");
            return 0;
        }
    }

    printf("Phrase non trouvée\n");
    return 0;
}
