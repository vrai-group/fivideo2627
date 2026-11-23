#include <stdio.h>

int main(void)
{
    char parola[] = "motore";
    int len = 0;

    for (int i = 0; parola[i] != '\0'; i++)
        len++;

    for (int i = len - 1; i >= 0; i--)
        printf("%c", parola[i]);
    printf("\n");

    for (int i = 0; i < len / 2; i++) {
        char tmp = parola[i];
        parola[i] = parola[len - 1 - i];
        parola[len - 1 - i] = tmp;
    }
    printf("%s\n", parola);

    return 0;
}
