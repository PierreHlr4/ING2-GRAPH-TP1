#include "TP1.h"
#include "Question 1.5.h"
#include <stdio.h>

void TP1() {
    Graphe g;  // Allouer un Graphe

    charger_graphe(&g);

    afficher_influences(&g);
}