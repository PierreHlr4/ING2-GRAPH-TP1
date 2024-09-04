#include <stdio.h>
#include "TPs/TP1/TP1.h"

int main() {
    int choixTp = 0;
    do {
        printf("Quel TP souhaitez vous ? 0 pour quitter.\n");
        scanf("%d", &choixTp);
        switch (choixTp) {
            case 1:
                TP1();
                break;
            case 2:
                break;
            default:
                break;
        }
    } while (choixTp);
    return 0;
}
