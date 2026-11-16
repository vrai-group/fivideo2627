/**
 * @file 06-inserimento-while.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2026-11-02
 * 
 * Chiedi all'utente un numero compreso tra `1` e `10`.

Se il numero non è valido, continua a richiederlo finché l'utente non inserisce un valore corretto.

### Esempio

```text
Inserisci un numero da 1 a 10: 15
Valore non valido

Inserisci un numero da 1 a 10: -2
Valore non valido

Inserisci un numero da 1 a 10: 7
Valore accettato

```
 * 
 * @copyright Copyright (c) 2026
 * 
 */

 #include <stdio.h>

 int main(void) {
    int numero;
    int valido = 0;

    while (!valido) {
        printf("Inserisci un numero da 1 a 10: ");
        scanf("%d", &numero);
        if (numero < 1 || numero > 10 ) {
            printf("Valore non valido\n");
        } else {
            valido = 1;
            printf("Valore accettato\n");
        }
    }

    return 0;
 }