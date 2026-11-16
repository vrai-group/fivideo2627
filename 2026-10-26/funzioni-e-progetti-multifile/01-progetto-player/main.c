/**
 * @file main.c
 * @author Gionata Massi
 * @brief Esempio di utilizzo delle funzioni dichiarate in player.h per calcolare salute totale, danno medio, danno al secondo e percentuale di energia.
 * @version 0.1
 * @date 2026-10-26
 * @copyright Copyleft (c) 2026 Gionata Massi
 */
#include <stdio.h>
#include "player.h"

/**
 * @brief Funzione principale del programma.
 * @return 0 in caso di successo.
 */
int main(void)
{
    int saluteBase = 100;
    int bonusSalute = 25;

    float dannoMinimo = 12.0;
    float dannoMassimo = 20.0;

    float attacchiAlSecondo = 1.5;

    float energiaAttuale = 75.0;
    float energiaMassima = 100.0;

     printf("Salute totale: %d\n",
         saluteTotale(saluteBase, bonusSalute));
     printf("Danno medio: %.2f\n",
         dannoMedio(dannoMinimo, dannoMassimo));
     printf("Danno al secondo: %.2f\n",
         dannoAlSecondo(dannoMedio(dannoMinimo, dannoMassimo), attacchiAlSecondo));
    printf("Percentuale di energia: %.2f%%\n",
         percentualeEnergia(energiaAttuale, energiaMassima));

    return 0;
}
