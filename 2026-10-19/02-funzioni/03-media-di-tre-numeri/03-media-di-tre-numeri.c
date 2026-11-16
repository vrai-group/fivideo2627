/*
 * File: 03-media-di-tre-numeri.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 03-media-di-tre-numeri 03-media-di-tre-numeri.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Media di tre numeri
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `float media(float a, float b, float c)` che restituisce la media aritmetica dei tre valori.
 * 
 * **Caso di esempio**
 * - Chiamata: `media(6.0, 8.0, 10.0)`
 * - Risultato atteso: `8.0`
 * ------------------------------------------------------------
 */

#include <stdio.h>

float media(float a, float b, float c) {
    return (a + b + c) / 3.0f;
}

int main(void) {
    printf("media(6.0, 8.0, 10.0) = %.1f\n", media(6.0f, 8.0f, 10.0f));
    return 0;
}
