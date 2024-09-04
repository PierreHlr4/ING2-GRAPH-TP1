#include "TP1.h"
#include "Question 1.5.h"
#include <stdio.h>

void TP1() {
    Graphe g;  // Allouer un Graphe

    char nom_fichier[100];
    printf("Entrez le nom du fichier");
    scanf("%s", nom_fichier);

    charger_graphe(nom_fichier, &g);

    afficher_influences(&g);
}