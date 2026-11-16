#include <stdio.h>

int doppio(int valore) {
    return 2 * valore;
}

int main() {
    int n = 5;
    int p = doppio(n);
    printf("n: %d,\tp: %d\n", n, p);

    return 0;
}