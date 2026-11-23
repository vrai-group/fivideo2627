#include <stdio.h>

float media(float valori[], int dimensione);
float massimo(float valori[], int dimensione);
int contaSopraMedia(float valori[], int dimensione, float media);

int main(void)
{
    float misure[6] = {9.8, 10.2, 9.9, 10.5, 10.1, 9.7};
    const int n = 6;

    const float m = media(misure, n);
    printf("media: %.2f\n", m);
    printf("massimo: %.1f\n", massimo(misure, n));
    printf("sopra media: %d\n", contaSopraMedia(misure, n, m));

    return 0;
}

// Pattern Accumulation/Reduce (Gatherer): acc accumula la somma dei valori.
float media(float valori[], int dimensione) {
    float acc = 0.f;
    for (int i = 0; i < dimensione; i++) {
        acc = acc + valori[i];
    }
    return acc / dimensione;
}

// Pattern Extreme Selection (Most-wanted holder): acc conserva il massimo incontrato.
float massimo(float valori[], int dimensione) {
    float acc = valori[0];
    for(int i = 1; i < dimensione; i++) {
        acc = (valori[i] > acc) ? valori[i] : acc;
    }
    return acc;
}

// Pattern Filter and Count (Gatherer): acc conta solo i valori che superano la soglia.
int contaSopraMedia(float valori[], int dimensione, float media) {
    int acc = 0;
    for (int i = 0; i < dimensione; i++) {
        acc += (valori[i] > media) ? 1 : 0;
    }
    return acc;
}
