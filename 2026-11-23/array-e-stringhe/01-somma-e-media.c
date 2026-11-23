#include <stdio.h>

int main(void)
{
    int valori[5] = {10, 20, 30, 40, 50};
    int somma = 0;
    // TODO: stampa gli elementi, calcola somma e media
    for(int i = 0; i < 5; i++) {
        printf("%d ", valori[i]);
        somma += valori[i];
    }
    printf("\n");
    printf("somma: %d\n", somma);
    printf("media: %.2f\n", somma / 5.0);

    return 0;
}
