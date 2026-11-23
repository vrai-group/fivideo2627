#include <stdio.h>

int main(void)
{
    int valori[6] = {12, 4, 25, 8, 30, 3};
    //  indici        0  1   2  3   4  5              

    // TODO: trova massimo, minimo e indice del massimo
    int massimo = valori[0];
    int minimo = valori[0];
    int indiceMassimo = 0;

    for (int i = 1; i < 6; i++) {
        if(valori[i] > massimo) {
            massimo = valori[i];
            indiceMassimo = i;
        }
        if(valori[i] < minimo)
            minimo = valori[i];
    }

    printf("massimo: %d\n", massimo);
    printf("minimo: %d\n", minimo);
    printf("indiceMassimo: %d\n", indiceMassimo);

    return 0;
}
