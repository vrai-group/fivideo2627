/*

file: conta.c

## Conta da 1 a N con `while`

Chiedi all'utente un numero intero positivo `N` usando `scanf()`.

Stampa tutti i numeri da `1` a `N` usando un ciclo `while`.

### Esempio

```
Inserisci N: 5
1 2 3 4 5

```
*/
#include<stdio.h>

int main(void) {
    int N, i;
    printf("Immetti il numero N: ");
    scanf("%d", &N);
    i = 1;
    while (i < N) {
        printf("%d ", i);
        i++;
    }
    printf("%d\n", N);

    return 0;
}