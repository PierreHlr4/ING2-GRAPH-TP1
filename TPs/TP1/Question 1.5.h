#include <stdbool.h>
#include <string.h>

#ifndef TP_ING2_QUESTION_1_5_H
#define TP_ING2_QUESTION_1_5_H

#define NBR_PERSONNES 7

typedef struct {
    char nom[20];
    int numero;
} Sommet;

typedef struct {
    bool matrice[NBR_PERSONNES][NBR_PERSONNES];
    Sommet sommets[NBR_PERSONNES];
    int ordre;
} Graphe;

void init_sommet(Sommet* s, const char* nom, int numero);

#endif