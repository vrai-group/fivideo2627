/*
 * File: 04-sconto-sul-prezzo.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 04-sconto-sul-prezzo 04-sconto-sul-prezzo.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Sconto sul prezzo
 * 
 * **Argomento:** Tipi di base e operatore ternario
 * 
 * Dato `float prezzo = 120.0;`, applica uno sconto del 10% se il prezzo è maggiore di `100`; altrimenti lascia il prezzo invariato. Salva il risultato in `float prezzoFinale` e stampalo.
 * 
 * **Caso di esempio**
 * - Dato: `prezzo = 120.0`
 * - Output atteso: `Prezzo finale: 108.00`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int main(void) {
    float prezzo = 120.0f;
    float prezzoFinale;

    /* TODO: calcola il prezzo finale con l'operatore ternario. */
    prezzoFinale = (prezzo > 100.0f) ? (prezzo * 0.9f) : prezzo;
    printf("Prezzo finale: %.2f\n", prezzoFinale);

    return 0;
}
