/** @file movement.c
 *  @brief Implementazione delle funzioni di movimento.
 *  @author Gionata Massi
 *  @version 0.1
 *  @date 2026-10-26
 *
 *  @copyright Copyleft (c) 2026 Gionata Massi
 */

#include "movement.h"

float nuovaPosizione(float posizione, float velocita, float tempo) {
    return posizione + velocita * tempo;
}

float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo) {
    return velocitaIniziale + accelerazione * tempo;
}

float distanza(float x1, float x2) {
    return x2 - x1;
}

float energiaCinetica(float massa, float velocita) {
    return 0.5f * massa * velocita * velocita;
}
