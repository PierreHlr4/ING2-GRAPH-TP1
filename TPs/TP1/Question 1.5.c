#include "Question 1.5.h"

void init_sommet(Sommet* s, const char* nom, int numero) {
    s->numero = numero;

    strncpy(s->nom, nom, sizeof(s->nom) - 1);

    s->nom[sizeof(s->nom) - 1] = '\0';
}

void init_graphe(Graphe* g, int ordre) {
    g->ordre = ordre;

    for (int i = 0; i < ordre; i++) {
        for (int j = 0; j < ordre; j++) {
            g->matrice[i][j] = false;
        }
    }

    for (int i = 0; i < ordre; i++) {
        init_sommet(&(g->sommets[i]), "", i);
    }
}

void charger_graphe(Graphe* g) {
    FILE* fichier = fopen("TP1_1.5_Influences", "r");
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    int ordre;
    fscanf(fichier, "%d", &ordre);
    init_graphe(g, ordre);

    char nom[20];
    for (int i = 0; i < ordre; i++) {
        fscanf(fichier, "%s", nom);
        init_sommet(&(g->sommets[i]), nom, i);
    }

    int temp;
    for (int i = 0; i < ordre; i++) {
        for (int j = 0; j < ordre; j++) {
            fscanf(fichier, "%d", &temp);
            g->matrice[i][j] = (temp == 1);
        }
    }

    fclose(fichier);
}

void afficher_influences(Graphe* g) {
    for (int i = 0; i < g->ordre; i++) {
        printf("%s influence: ", g->sommets[i].nom);
        int a_influence = 0;
        for (int j = 0; j < g->ordre; j++) {
            if (g->matrice[i][j]) {
                printf("%s ", g->sommets[j].nom);
                a_influence = 1;
            }
        }
        if (!a_influence) {
            printf("personne");
        }
        printf("\n");
    }
}

