#include "Question 1.5.h"

void init_sommet(Sommet* s, const char* nom, int numero) {
    s->numero = numero;

    strncpy(s->nom, nom, sizeof(s->nom) - 1);

    s->nom[sizeof(s->nom) - 1] = '\0';
}
