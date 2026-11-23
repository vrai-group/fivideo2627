#include <stdio.h>

int main(void)
{
    char parola[] = "programmazione";
    int lunghezza = 0;
    int numeroDiA = 0;

    // TODO: conta i caratteri (senza strlen) e le occorrenze di 'a'
    for(int i = 0; parola[i] != '\0'; i++) {
        lunghezza++;
        if (parola[i] == 'a')
            numeroDiA++;
    // OPPURE usando i puntatori
    lunghezza = 0;
    int numeroDiA = 0;
    for(char *pc = parola; *pc != '\0'; pc++) {
        l++;
        if (*pc == 'a')
            numeroDiA++;
    }

    printf("Lunghezza di '%s': %d\n", parola, lunghezza);

    return 0;
}
