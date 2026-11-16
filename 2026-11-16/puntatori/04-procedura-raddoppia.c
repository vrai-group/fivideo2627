#include <stdio.h>

void raddoppia(int *p) {
    *p *= 2;
}

int main() {
    int n = 5;
    raddoppia(&n);
    printf("n: %d\n", n);

    return 0;
}