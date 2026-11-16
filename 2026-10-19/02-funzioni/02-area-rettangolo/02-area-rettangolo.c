/*
 * File: 02-area-rettangolo.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 02-area-rettangolo 02-area-rettangolo.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Area di un rettangolo
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `float areaRettangolo(float base, float altezza)` che restituisce l'area del rettangolo.
 * 
 * **Caso di esempio**
 * - Chiamata: `areaRettangolo(5.0, 3.0)`
 * - Risultato atteso: `15.0`
 * ------------------------------------------------------------
 */

#include <stdio.h>

float areaRettangolo(float base, float altezza) {
    return base * altezza;
}

int main(void) {
    printf("areaRettangolo(5.0, 3.0) = %.1f\n", areaRettangolo(5.0f, 3.0f));
    return 0;
}
