#include <stdio.h>

int main(void)
{
    char testo[] = "videogame";
    int vocali = 0;
    int consonanti = 0;

    for (int i = 0; testo[i] != '\0'; i++) {
        if (testo[i] == 'a' ||
            testo[i] == 'e' ||
            testo[i] == 'i' ||
            testo[i] == 'o' ||
            testo[i] == 'u')
            vocali++;
        else
            consonanti++;
    }

    printf("Vocali: %d\nConsonanti: %d\n", vocali, consonanti);

    return 0;
}
