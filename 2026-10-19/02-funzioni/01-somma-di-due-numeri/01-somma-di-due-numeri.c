/*
 * File: 01-somma-di-due-numeri.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 01-somma-di-due-numeri 01-somma-di-due-numeri.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Somma di due numeri
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi la funzione `int somma(int a, int b)` che restituisce la somma dei due valori.
 * 
 * **Caso di esempio**
 * - Chiamata: `somma(4, 6)`
 * - Risultato atteso: `10`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int somma(int a, int b) {
    return a + b;
}

int main(void) {
    printf("somma(4, 6) = %d\n", somma(4, 6));
    return 0;
}
