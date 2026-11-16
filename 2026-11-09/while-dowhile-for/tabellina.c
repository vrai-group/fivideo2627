/*
 file: tabellina.c

 Tabellina con `for`

Chiedi all'utente un numero intero.

Stampa la sua tabellina da `1` a `10`.

### Esempio

```
Inserisci un numero: 7

7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
...
7 x 10 = 70

```
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}