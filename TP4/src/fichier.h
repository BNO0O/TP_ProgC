#ifndef FICHIER_H
#define FICHIER_H

/* Prototypes pour lecture/écriture de fichiers simples */
void lire_fichier(const char *nom_de_fichier);
int ecrire_dans_fichier(const char *nom_de_fichier, const char *message); /* retourne 0 si ok */

#endif /* FICHIER_H */
