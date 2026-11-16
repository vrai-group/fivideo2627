/*
 * File: 03-maggiore-tra-due-numeri.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 03-maggiore-tra-due-numeri 03-maggiore-tra-due-numeri.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Maggiore tra due numeri
 * 
 * **Argomento:** Tipi di base e operatore ternario
 * 
 * Date le variabili `int a = 12;` e `int b = 8;`, usa l'operatore ternario per salvare il valore maggiore in `int max;`. Stampa poi il risultato con `printf`.
 * 
 * **Caso di esempio**
 * - Dati: `a = 12`, `b = 8`
 * - Output atteso: `Il maggiore è 12`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int main(void) {
    int a = 12;
    int b = 8;
    int max;

    /* TODO: assegna il maggiore a max e stampa il risultato. */
    max = (a > b) ? a : b;
    printf("Il maggiore è %d\n", max);

    return 0;
}
