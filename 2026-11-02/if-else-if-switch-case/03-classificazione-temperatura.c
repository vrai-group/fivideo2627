#include <stdio.h>

int main(void) {
    int temperatura;

    printf("Inserisci la temperatura: ");
    if (scanf("%d", &temperatura) != 1) {
        fprintf(stderr, "Input non valido.\n");
        return 1;
    }

    if (temperatura < 10) {
        printf("Freddo\n");
    } else if (temperatura < 25) {
        printf("Mite\n");
    } else {
        printf("Caldo\n");
    }

    return 0;
}
