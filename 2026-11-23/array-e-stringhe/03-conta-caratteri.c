#include <stdio.h>

int main(void)
{
    char parola[] = "programmazione";
    int lunghezza = 0;
    int numeroDiA = 0;

    for (int i = 0; parola[i] != '\0'; i++) {
        lunghezza++;
        if (parola[i] == 'a')
            numeroDiA++;
    }

    printf("Lunghezza di '%s': %d\n", parola, lunghezza);
    printf("Numero di 'a' in '%s': %d\n", parola, numeroDiA);

    return 0;
}
