/*
 * File: 06-calcola-lo-sconto.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 06-calcola-lo-sconto 06-calcola-lo-sconto.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Calcola lo sconto
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `float prezzoScontato(float prezzo, float sconto)` che restituisce il prezzo finale dopo aver applicato uno sconto percentuale. Si assume che `sconto` sia espresso in percentuale (per esempio `20` significa 20%).
 * 
 * **Caso di esempio**
 * - Chiamata: `prezzoScontato(100, 20)`
 * - Risultato atteso: `80.0`
 * ------------------------------------------------------------
 */

#include <stdio.h>

float prezzoScontato(float prezzo, float sconto) {
    return prezzo - (prezzo * sconto / 100.0f);
}

int main(void) {
    printf("prezzoScontato(100, 20) = %.1f\n", prezzoScontato(100.0f, 20.0f));
    printf("prezzoScontato(50, 10) = %.1f\n", prezzoScontato(50.0f, 10.0f));
    return 0;
}
