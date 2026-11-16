/**
 * @file player.c
 * @author Gionata Massi
 * @version 0.1
 * @date 2026-10-26
 * @copyright Copyleft (c) 2026 Gionata Massi
 * @brief Implementazione delle funzioni per le statistiche del giocatore.
 */
#include "player.h"

int saluteTotale(int saluteBase, int bonus) {
    return saluteBase + bonus;
}

float dannoMedio(float dannoMinimo, float dannoMassimo) {
    return (dannoMinimo + dannoMassimo) / 2.0f;
}

float dannoAlSecondo(float danno, float attacchiAlSecondo) {
    return danno * attacchiAlSecondo;
}

float percentualeEnergia(float energiaAttuale, float energiaMassima) {
    return energiaAttuale / energiaMassima * 100.0f;
}
