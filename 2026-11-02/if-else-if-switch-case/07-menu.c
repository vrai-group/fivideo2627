/*
Crea un piccolo menu:

```text
1 - Somma due numeri
2 - Calcola il quadrato di un numero
3 - Calcola il doppio di un numero
0 - Esci

```

Leggi la scelta dell'utente con `scanf()`.

Usa uno `switch` per gestire le diverse opzioni.

Il menu deve essere ripetuto con `do while` finché l'utente non sceglie `0`.

*/

#include <stdio.h>

static int leggiIntero(const char *messaggio, int *valore) {
    printf("%s", messaggio);
    if (scanf("%d", valore) != 1) {
        fprintf(stderr, "Input non valido.\n");
        return 0;
    }
    return 1;
}

static int somma(void) {
    int n1, n2;
    if (!leggiIntero("Primo addendo: ", &n1) ||
        !leggiIntero("Secondo addendo: ", &n2)) {
        return 0;
    }
    printf("Somma: %d\n\n", n1 + n2);
    return 1;
}

static int quadrato(void) {
    int n;
    if (!leggiIntero("Numero: ", &n)) {
        return 0;
    }
    printf("Quadrato: %d\n\n", n * n);
    return 1;
}

static int doppio(void) {
    int n;
    if (!leggiIntero("Numero: ", &n)) {
        return 0;
    }
    printf("Doppio: %d\n\n", 2 * n);
    return 1;
}

int main(void) {
    int scelta;

    do {
        printf("1 - Somma\n");
        printf("2 - Quadrato\n");
        printf("3 - Doppio\n");
        printf("0 - Esci\n");

        if (!leggiIntero("Scelta: ", &scelta)) {
            return 1;
        }

        switch (scelta) {
        case 1:
            if (!somma()) {
                return 1;
            }
            break;
        case 2:
            if (!quadrato()) {
                return 1;
            }
            break;
        case 3:
            if (!doppio()) {
                return 1;
            }
            break;
        case 0:
            break;
        default:
            printf("Scelta non valida.\n\n");
            break;
        }
    } while (scelta != 0);

    return 0;
}