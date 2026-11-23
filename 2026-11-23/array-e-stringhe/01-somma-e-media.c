#include <stdio.h>

int main(void)
{
    int valori[5] = {10, 20, 30, 40, 50};
    int somma = 0;

    for (int i = 0; i < 5; i++) {
        printf("%d ", valori[i]);
        somma += valori[i];
    }
    printf("\n");
    printf("Somma: %d\n", somma);
    printf("Media: %.2f\n", somma / 5.0);

    return 0;
}
