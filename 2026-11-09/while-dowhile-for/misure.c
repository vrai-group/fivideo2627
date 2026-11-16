/*
  file: misure.c

## Analisi di N misure con `for`

Chiedi all'utente quante misure vuole inserire.

Poi usa un ciclo `for` per leggere `N` valori usando `scanf()`.

Durante il ciclo:

* calcola la somma delle misure
* conta quante misure sono positive
* trova il valore massimo

Alla fine stampa:

```
Media: ...
Numero di valori positivi: ...
Massimo: ...

```

### Obiettivo

Combinare:

* `for`
* `scanf()`
* accumulatore
* contatore
* confronto tra valori

*/
#include <stdio.h>

int main(void) {
    int N;
    float somma = 0.0f;
    int misure_positive = 0;
    float massimo = 0.0f;

    printf("Quante misure? ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        fprintf(stderr, "Inserisci un numero di misure maggiore di zero.\n");
        return 1;
    }

    for (int i = 0; i < N; ++i) {
        float misura;
        printf("Misura %d: ", i + 1);
        if (scanf("%f", &misura) != 1) {
            fprintf(stderr, "Misura non valida.\n");
            return 1;
        }
        somma += misura;
        if (misura > 0) {
            misure_positive++;
        }
        if (i == 0 || misura > massimo) {
            massimo = misura;
        }
    }

    printf("Media: %.2f\n", somma / N);
    printf("Numero di valori positivi: %d\n", misure_positive);
    printf("Massimo: %.2f\n", massimo);

    return 0;
}