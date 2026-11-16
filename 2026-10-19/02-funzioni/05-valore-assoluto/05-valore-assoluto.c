/*
 * File: 05-valore-assoluto.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 05-valore-assoluto 05-valore-assoluto.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Valore assoluto
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `int valoreAssoluto(int numero)` che restituisce il valore assoluto del numero. Non puoi usare `if`: usa l'operatore ternario.
 * 
 * **Caso di esempio**
 * - Chiamata: `valoreAssoluto(-7)`
 * - Risultato atteso: `7`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int valoreAssoluto(int numero) {
    return (numero >= 0) ? numero : -numero;
}

int main(void) {
    printf("valoreAssoluto(-7) = %d\n", valoreAssoluto(-7));
    return 0;
}
