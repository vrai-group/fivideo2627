#include <stdio.h>

int main(void)
{
    int valori[6] = {12, 4, 25, 8, 30, 3};
    int massimo = valori[0];
    int minimo = valori[0];
    int indiceMassimo = 0;

    for (int i = 1; i < 6; i++) {
        if (valori[i] > massimo) {
            massimo = valori[i];
            indiceMassimo = i;
        }
        if (valori[i] < minimo)
            minimo = valori[i];
    }

    printf("Massimo: %d\n", massimo);
    printf("Minimo: %d\n", minimo);
    printf("Indice del massimo: %d\n", indiceMassimo);

    return 0;
}
