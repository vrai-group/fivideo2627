/*
Chiedi all'utente:

1. un primo numero
2. un secondo numero
3. un'operazione

Puoi usare questo menu:

```text
1 - Addizione
2 - Sottrazione
3 - Moltiplicazione
4 - Divisione

```

Usa `switch case` per eseguire l'operazione scelta.

Per la divisione, usa un `if` per controllare che il secondo numero sia diverso da zero.

*/
#include <stdio.h>

int addizione(int n1, int n2) {
    return n1 + n2;
}

int sottrazione(int n1, int n2) {
    return n1 - n2;
}

int moltiplicazione(int n1, int n2) {
    return n1 * n2;
}

int divisione(int n1, int n2) {
    if (n2 == 0) {
        printf("Errore: divisione per 0\n");
        return 0;
    }
    return n1 / n2;
}

int main(void) {
    int i1, i2, op, retval = 0;
    printf("Immetti il primo numero: ");
    scanf("%d", &i1);
    printf("Immetti il secondo numero: ");
    scanf("%d", &i2);
    printf("Scegli un'operazione:\n");
    printf("1 - Addizione\n2 - Sottrazione\n3 - Moltiplicazione\n4 - Divisione\n");
    scanf("%d", &op);
    switch(op) {
        case 1:
            retval = addizione(i1, i2);
            break;
        case 2:
            retval = sottrazione(i1, i2);
            break;
        case 3:
            retval = moltiplicazione(i1, i2);
            break;
        case 4:
            retval = divisione(i1, i2);
            break;
        default:
            printf("Operazione non definita\n");
    }
    printf("Risultato: %d\n", retval);

    return 0;
}