#include <stdio.h>

static int leggiIntero(const char *messaggio, int *valore) {
    printf("%s", messaggio);
    if (scanf("%d", valore) != 1) {
        fprintf(stderr, "Input non valido.\n");
        return 0;
    }
    return 1;
}

int main(void) {
    int scelta;

    do {
        printf("1 - Verifica se un numero e' pari o dispari\n");
        printf("2 - Verifica se un numero e' positivo o negativo\n");
        printf("3 - Calcola il quadrato di un numero\n");
        printf("0 - Esci\n");

        if (!leggiIntero("Scelta: ", &scelta)) {
            return 1;
        }

        switch (scelta) {
        case 1: {
            int numero;
            if (!leggiIntero("Inserisci un numero: ", &numero)) {
                return 1;
            }
            if (numero % 2 == 0) {
                printf("Pari\n\n");
            } else {
                printf("Dispari\n\n");
            }
            break;
        }
        case 2: {
            int numero;
            if (!leggiIntero("Inserisci un numero: ", &numero)) {
                return 1;
            }
            if (numero > 0) {
                printf("Positivo\n\n");
            } else if (numero < 0) {
                printf("Negativo\n\n");
            } else {
                printf("Zero\n\n");
            }
            break;
        }
        case 3: {
            int numero;
            if (!leggiIntero("Inserisci un numero: ", &numero)) {
                return 1;
            }
            printf("Quadrato: %d\n\n", numero * numero);
            break;
        }
        case 0:
            break;
        default:
            printf("Scelta non valida.\n\n");
            break;
        }
    } while (scelta != 0);

    return 0;
}
