#include <stdio.h>

int triplo(int valore) {
    return 3 * valore;
}

void triplica(int *pvalore) {
    *pvalore *= 3;
}

int main() {
    int numero = 4;
    int risultato = triplo(numero);
    printf("numero: %d, risultato: %d\n", numero, risultato);

    triplica(&numero);
    printf("numero: %d\n", numero);

    return 0;
}