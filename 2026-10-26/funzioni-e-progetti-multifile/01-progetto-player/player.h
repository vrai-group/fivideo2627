/**
 * @file player.h
 * @author Gionata Massi
 * @brief Interfaccia delle funzioni per le statistiche del giocatore.
 * @version 0.1
 * @date 2026-10-26
 *
 * @copyright Copyleft (c) 2026 Gionata Massi
 *
 * @mainpage Challenge 1 – Statistiche del giocatore
 * @section intro_sec Introduzione
 * Questo progetto implementa un semplice modulo per calcolare le statistiche del giocatore.
 * @section example_sec Esempio d'uso
 * L'esempio usa gli stessi valori e le stesse chiamate del programma `main.c`.
 * @code{.c}
 * #include <stdio.h>
 * #include "player.h"
 *
 * int main(void)
 * {
 *     int saluteBase = 100;
 *     int bonusSalute = 25;
 *     float dannoMinimo = 12.0;
 *     float dannoMassimo = 20.0;
 *     float attacchiAlSecondo = 1.5;
 *     float energiaAttuale = 75.0;
 *     float energiaMassima = 100.0;
 *
 *     printf("Salute totale: %d\n",
 *         saluteTotale(saluteBase, bonusSalute));
 *     printf("Danno medio: %.2f\n",
 *         dannoMedio(dannoMinimo, dannoMassimo));
 *     printf("Danno al secondo: %.2f\n",
 *         dannoAlSecondo(dannoMedio(dannoMinimo, dannoMassimo),
 *                        attacchiAlSecondo));
 *     printf("Percentuale di energia: %.2f%%\n",
 *         percentualeEnergia(energiaAttuale, energiaMassima));
 *
 *     return 0;
 * }
 * @endcode
 * @section build_sec Compilazione
 * @subsection separate_sec Compilazione separata
 * @code{.sh}
 * gcc -std=c17 -Wall -Wextra -Wpedantic -c main.c -o main.o
 * gcc -std=c17 -Wall -Wextra -Wpedantic -c player.c -o player.o
 * gcc main.o player.o -o challenge1
 * @endcode
 * @subsection single_sec Compilazione e linking in un unico comando
 * @code{.sh}
 * gcc -std=c17 -Wall -Wextra -Wpedantic main.c player.c -o challenge1
 * @endcode
 */

#ifndef PLAYER_H
#define PLAYER_H

/**
 * @brief Calcola la salute totale del giocatore.
 * @param saluteBase La salute base del giocatore.
 * @param bonus Il bonus di salute.
 * @return La salute totale del giocatore.
 */
int saluteTotale(int saluteBase, int bonus);

/**
 * @brief Calcola il danno medio.
 * @param dannoMinimo Il danno minimo.
 * @param dannoMassimo Il danno massimo.
 * @return Il danno medio.
 */
float dannoMedio(float dannoMinimo, float dannoMassimo);

/**
 * @brief Calcola il danno al secondo.
 * @param danno Il danno per attacco.
 * @param attacchiAlSecondo Il numero di attacchi al secondo.
 * @return Il danno al secondo.
 */
float dannoAlSecondo(float danno, float attacchiAlSecondo);

/**
 * @brief Calcola la percentuale di energia.
 * @param energiaAttuale L'energia attuale.
 * @param energiaMassima L'energia massima.
 * @pre energiaMassima deve essere diversa da zero.
 * @return La percentuale di energia.
 */
float percentualeEnergia(float energiaAttuale, float energiaMassima);

#endif /* PLAYER_H */