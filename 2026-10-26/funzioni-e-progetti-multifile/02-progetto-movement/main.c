/**
 * @file main.c
 * @author Gionata Massi
 * @version 0.1
 * @date 2026-10-26
 * @copyright Copyleft (c) 2026 Gionata Massi
 *
 * @brief Esempio di utilizzo delle funzioni di movimento.
 */
#include "movement.h"
#include <stdio.h>

/**
 * @brief Funzione principale del programma.
 * @return 0 se il programma termina correttamente.
 */
int main(void)
{
    float posizione = 10.0f;
    float velocita = 5.0f;
    float accelerazione = 2.0f;
    float tempo = 3.0f;
    float massa = 8.0f;

    printf("Nuova posizione: %.2f\n",
        nuovaPosizione(posizione, velocita, tempo));
    printf("Nuova velocita: %.2f\n",
        nuovaVelocita(velocita, accelerazione, tempo));
    printf("Distanza percorsa: %.2f\n",
        distanza(posizione, nuovaPosizione(posizione, velocita, tempo)));
    printf("Energia cinetica: %.2f\n",
        energiaCinetica(massa, nuovaVelocita(velocita, accelerazione, tempo)));

    return 0;
}
