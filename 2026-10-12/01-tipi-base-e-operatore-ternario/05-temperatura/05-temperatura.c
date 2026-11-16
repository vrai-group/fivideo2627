/*
 * File: 05-temperatura.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 05-temperatura 05-temperatura.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Temperatura
 * 
 * **Argomento:** Tipi di base e operatore ternario
 * 
 * Data `float temperatura = 28.5;`, usa l'operatore ternario per stampare `Caldo` se la temperatura è maggiore o uguale a `25`, altrimenti `Fresco`. Converti inoltre la temperatura in Fahrenheit con `fahrenheit = temperatura * 9.0 / 5.0 + 32` e stampa il risultato.
 * 
 * **Caso di esempio**
 * - Dato: `temperatura = 28.5`
 * - Output atteso: `Caldo` e `Fahrenheit: 83.30`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int main(void) {
    float temperatura = 28.5f;
    float fahrenheit;

    /* TODO: stampa Caldo/Fresco, calcola Fahrenheit e stampa il risultato. */
    printf((temperatura >= 25.0f) ? "Caldo\n" : "Fresco\n");
    fahrenheit = temperatura * 9.0f / 5.0f + 32.0f;
    printf("Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
