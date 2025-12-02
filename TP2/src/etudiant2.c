#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant e[5];

    strcpy(e[0].nom, "Dupont");
    strcpy(e[0].prenom, "Marie");
    strcpy(e[0].adresse, "Rue A 10");
    e[0].note1 = 16.5;
    e[0].note2 = 12.1;

    strcpy(e[1].nom, "Martin");
    strcpy(e[1].prenom, "Pierre");
    strcpy(e[1].adresse, "Rue B 22");
    e[1].note1 = 14.0;
    e[1].note2 = 14.1;

    // ... compléter les 3 autres étudiants

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i+1);
        printf("Nom : %s\n", e[i].nom);
        printf("Prénom : %s\n", e[i].prenom);
        printf("Adresse : %s\n", e[i].adresse);
        printf("Note 1 : %.2f\n", e[i].note1);
        printf("Note 2 : %.2f\n\n", e[i].note2);
    }

    return 0;
}
