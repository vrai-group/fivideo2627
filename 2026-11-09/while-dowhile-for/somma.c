/*
  file: somma.c

## 2Somma dei primi N numeri con `for`

Chiedi all'utente un numero intero `N`.

Calcola la somma:

```
1 + 2 + 3 + ... + N

```

usando un ciclo `for`.

*/
#include <stdio.h>

int main(void) {
    int n, acc = 0;
    do {
        printf("Immetti il numero n: ");
        scanf("%d", &n);
    } while (n < 0);
    for(int i = 1; i <= n; i++) {
        acc += i;
    }
    // \sum_{i=1}^n i = n * (n+1) / 2
    printf("1 + 2 +... + %d = %d\n", n, acc);

    return 0;
}