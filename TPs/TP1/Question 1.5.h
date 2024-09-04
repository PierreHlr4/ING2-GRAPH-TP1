#include <stdio.h>
#include <stdlib.h>
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

void init_graphe(Graphe* g, int ordre);

void charger_graphe(Graphe* g);

void afficher_influences(Graphe* g);

#endif