#include <stdio.h>

int main(void) {
    int numero;

    printf("Inserisci un numero intero: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Input non valido.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("Pari\n");
    } else {
        printf("Dispari\n");
    }

    return 0;
}
