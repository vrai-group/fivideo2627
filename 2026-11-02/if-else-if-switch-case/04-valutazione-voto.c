#include <stdio.h>

int main(void) {
    int voto;

    printf("Inserisci un voto da 0 a 30: ");
    if (scanf("%d", &voto) != 1) {
        fprintf(stderr, "Input non valido.\n");
        return 1;
    }

    if (voto < 0 || voto > 30) {
        printf("Voto non valido\n");
    } else if (voto < 18) {
        printf("Insufficiente\n");
    } else if (voto <= 23) {
        printf("Sufficiente\n");
    } else if (voto <= 27) {
        printf("Buono\n");
    } else {
        printf("Ottimo\n");
    }

    return 0;
}
