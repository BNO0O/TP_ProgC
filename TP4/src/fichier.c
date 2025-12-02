#include "fichier.h"
#include <stdio.h>
#include <stdlib.h>

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (!f) {
        fprintf(stderr, "Impossible d'ouvrir le fichier '%s' en lecture.\n", nom_de_fichier);
        return;
    }

    char buffer[1024];
    printf("Contenu du fichier %s :\n", nom_de_fichier);
    while (fgets(buffer, sizeof(buffer), f)) {
        fputs(buffer, stdout);
    }
    fclose(f);
}

int ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    /* On ouvre en mode append pour ajouter au fichier ; on peut changer en "w" pour écraser */
    FILE *f = fopen(nom_de_fichier, "a");
    if (!f) {
        fprintf(stderr, "Impossible d'ouvrir le fichier '%s' en écriture.\n", nom_de_fichier);
        return -1;
    }
    if (fprintf(f, "%s\n", message) < 0) {
        fprintf(stderr, "Erreur d'écriture dans le fichier '%s'.\n", nom_de_fichier);
        fclose(f);
        return -1;
    }
    fclose(f);
    return 0;
}
