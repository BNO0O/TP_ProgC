#include <stdio.h>

int main() {
    char noms[5][30] = {"Dupont", "Martin", "Durand", "Leroy", "Moreau"};
    char prenoms[5][30] = {"Marie", "Paul", "Emma", "Luc", "Julie"};
    char adresses[5][100] = {
        "Rue A 10", "Rue B 22", "Rue C 33", "Rue D 44", "Rue E 55"
    };

    float note_prog[5] = {15.5, 12.0, 14.5, 16.0, 11.5};
    float note_sys[5]  = {13.0, 17.0, 10.0, 14.0, 16.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation : %.2f\n", note_prog[i]);
        printf("Note Système : %.2f\n\n", note_sys[i]);
    }

    return 0;
}
