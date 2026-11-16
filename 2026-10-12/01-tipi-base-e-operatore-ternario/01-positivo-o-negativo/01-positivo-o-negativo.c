/*
 * File: 01-positivo-o-negativo.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 01-positivo-o-negativo 01-positivo-o-negativo.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Positivo o negativo
 * 
 * **Argomento:** Tipi di base e operatore ternario
 * 
 * Data la variabile `int numero = -4;`, usa l'operatore ternario per stampare `Positivo` se il numero è maggiore di 0 e `Negativo o zero` altrimenti.
 * 
 * **Caso di esempio**
 * - Dato: `numero = -4`
 * - Output atteso: `Negativo o zero`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int main(void) {
    int numero = -4;

    // TODO: usa l'operatore ternario e stampa il messaggio.
    // Soluzione:
    printf((numero > 0) ? "Positivo\n" : "Negativo o zero\n");

    return 0;
}
