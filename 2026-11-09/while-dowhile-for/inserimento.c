/*
  file: inserimento.c

## Inserimento controllato con `do while`

Chiedi all'utente un numero compreso tra `1` e `100`.

Se il numero non è valido, continua a richiederlo usando un ciclo `do while`.

Quando il valore è corretto, stampa:

```
Valore accettato

```
*/
#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Inserisci un numero tra 1 e 100\n");
        scanf("%d", &n);
    } while(n < 1 || n > 100);
    printf("Valore accettato\n");

    return 0;
}