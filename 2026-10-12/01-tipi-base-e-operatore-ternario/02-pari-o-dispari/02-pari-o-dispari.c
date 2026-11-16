/*
 * File: 02-pari-o-dispari.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 02-pari-o-dispari 02-pari-o-dispari.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Pari o dispari
 * 
 * **Argomento:** Tipi di base e operatore ternario
 * 
 * Data la variabile `int numero = 7;`, usa l'operatore `%` e l'operatore ternario per stampare `Pari` oppure `Dispari`.
 * 
 * **Caso di esempio**
 * - Dato: `numero = 7`
 * - Output atteso: `Dispari`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int main(void) {
    int numero = 7;

    /* TODO: verifica il resto della divisione per 2 e stampa il messaggio. */
    printf((numero % 2 == 0) ? "Pari\n" : "Dispari\n");

    return 0;
}
