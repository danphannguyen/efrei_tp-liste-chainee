#ifndef LISTE_H
#define LISTE_H

#include <stdbool.h>

typedef struct Maillon {
    int valeur;
    struct Maillon *suivant;
} Maillon;

Maillon *liste_inserer(Maillon *tete, int valeur);
int      liste_longueur(const Maillon *tete);
bool     liste_contient(const Maillon *tete, int valeur);      /* liste_contient */
void     liste_afficher(const Maillon *tete);      /* liste_afficher */
void     liste_liberer(Maillon *tete);      /* liste_liberer  */

#endif /* LISTE_H */