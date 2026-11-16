// file: tipi.c
#include <stdio.h>

int main(void) {
    char c1 = 65;
    char c2 =  2;
    char c3 = c1 + c2;
    char c4 = c1 / c2;
    char c5 = c1 * 3;
    float f1 = 314000000000000.0F;
    double d1 = 0.0000314;
    float f2 = f1 + d1;
    printf("%d\n", c1);
    printf("%d\n", c3);
    printf("%c\n", c3);
    printf("%d\n", c4);
    printf("%d\n", c5);
    printf("%f\n", f1);
    printf("%lf\n", d1);
    printf("%f\n", f2);

    return 0;
}
