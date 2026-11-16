/*
 * File: 04-numero-maggiore.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 04-numero-maggiore 04-numero-maggiore.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Numero maggiore
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `int maggiore(int a, int b)` che restituisce il maggiore tra i due parametri. Non puoi usare `if`: usa l'operatore ternario.
 * 
 * **Caso di esempio**
 * - Chiamata: `maggiore(12, 7)`
 * - Risultato atteso: `12`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int maggiore(int, int);

int main(void) {
    printf("maggiore(12, 7) = %d\n", maggiore(12, 7));
    return 0;
}

int maggiore(int a, int b) {
    return (a > b) ? a : b;
}
