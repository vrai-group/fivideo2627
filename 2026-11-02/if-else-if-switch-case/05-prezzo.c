/**
 * @file 05-prezzo.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2026-11-02
 * 
 * 5. Prezzo con sconto
 * 
 * Chiedi all'utente il prezzo di un prodotto.
 * Applica:
 * nessuno sconto se il prezzo è minore di 50 €
 * 10% di sconto se il prezzo è compreso tra 50 € e 99.99 €
 * 20% di sconto se il prezzo è maggiore o uguale a 100 €
 * 
 * Stampa il prezzo finale.
 * 
 *  Esempio
 * 
 * Prezzo: 120
 * Prezzo finale: 96.00
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main(void) {
    float prezzo;
    float prezzo_finale;
    printf("Prezzo: ");
    scanf("%f", &prezzo);
    if (prezzo < 0) {
        printf("Errore\n");

        return 1;
    }
    if (prezzo < 50) {
        prezzo_finale = prezzo;
    } else if (prezzo < 100) { // prezzo >= 50
        prezzo_finale = prezzo * 0.9f;
    } else { // prezzo >= 100
        prezzo_finale = prezzo * 0.8f;
    }
    printf("Prezzo finale: %f\n", prezzo_finale);

    return 0;
}