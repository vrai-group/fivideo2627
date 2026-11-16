#include <stdio.h>

void incrementa(int *numero);
void incrementa(int * numero) {
    (*numero)++;
}

int main()
{
    int x = 7;
    incrementa(&x);
    printf("%d\n", x);

    return 0;
}