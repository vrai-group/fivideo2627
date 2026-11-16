/*
 @file: 01-segno.c
 @brief: Esercizio 1 - Positivo, negativo o zero

Chiedi all'utente un numero intero usando `scanf()`.

Stampa:

* `Positivo` se il numero è maggiore di 0
* `Negativo` se il numero è minore di 0
* `Zero` se il numero è uguale a 0
*/
#include <stdio.h>

int main(void) {
    int numero;
    printf("Immetti un numero intero: ");
    scanf("%d", &numero);
    if (numero > 0) {
        printf("Positivo\n");
    } else if (numero < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}