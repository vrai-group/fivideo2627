/*
 * File: 07-maggiore-tra-tre-numeri.c
 * Corso: Fondamenti di Informatica - A.A. 2026-27
 * Compilazione: gcc -Wall -Wextra -std=c17 -pedantic -o 07-maggiore-tra-tre-numeri 07-maggiore-tra-tre-numeri.c
 *
 * Testo dell'esercizio (Markdown):
 * ------------------------------------------------------------
 * # Il maggiore tra tre numeri
 * 
 * **Argomento:** Funzioni
 * 
 * Scrivi `int maggioreTre(int a, int b, int c)` che restituisce il numero maggiore tra i tre parametri. Non puoi usare `if`: prova a risolvere il problema usando uno o più operatori ternari.
 * 
 * **Caso di esempio**
 * - Chiamata: `maggioreTre(4, 12, 9)`
 * - Risultato atteso: `12`
 * ------------------------------------------------------------
 */

#include <stdio.h>

int maggioreTre(int a, int b, int c) {
/*
Se volessimo risolvere il problema per casi, dovremmo considerare le seguenti possibilità:

- a è il massimo:
	- (a > b) e (a > c) (a è strettamente il maggiore).
	- (a = b) e (a > c) (a e b sono uguali e maggiori di c).
	- (a = c) e (a > b) (a e c sono uguali e maggiori di b).
- b è il massimo:
	- (b > a) e (b > c) (b è strettamente il maggiore).
	- (b = c) e (b > a) (b e c sono uguali e maggiori di a).
- c è il massimo:
	- (c > a) e (c > b) (c è strettamente il maggiore).
- Tutti uguali:
	- (a = b = c) (qualsiasi valore è il massimo).

Possiamo descriverlo come algoritmo:

se a è maggiore di b, allora
   se a è anche maggiore di c, allora
      il massimo è a;
      altrimenti, il massimo è c,
   altrimenti, se b è maggiore di c, allora
      il massimo è b;
      altrimenti, il massimo è c.
      
In questo modo, possiamo usare un'unica espressione con operatori ternari annidati per risolvere il problema:

```c
return (a > b)
    ? ((a > c) ? a
               : c)
    : ((b > c) ? b
               : c);
```

Computazionalmente, possiamo risolvere il problema in due passaggi, conservando un valore intermedio:
prima calcoliamo il massimo tra a e b, e poi confrontiamo il risultato con c.

```c
int maxAB = (a > b) ? a : b;
return (maxAB > c) ? maxAB : c;
```

*/
    int maxAB = (a > b) ? a : b;
    return (maxAB > c) ? maxAB : c;
}

int main(void) {
    printf("maggioreTre(4, 12, 9) = %d\n", maggioreTre(4, 12, 9));
    return 0;
}
