/**
 * @file movement.h
 * @author Gionata Massi
 * @brief Interfaccia delle funzioni per il movimento e l'energia.
 * @version 0.1
 * @date 2026-10-26
 * @copyright Copyleft (c) 2026 Gionata Massi
 *
 * @mainpage Challenge 2 – Movimento di un oggetto di gioco
 * @section intro_sec Introduzione
 * Questo progetto implementa un semplice modulo per calcolare la posizione, la velocità,
 * la distanza e l'energia cinetica di un oggetto in movimento.
 * @section example_sec Esempio d'uso
 * L'esempio usa gli stessi valori e le stesse chiamate del programma `main.c`.
 * @code{.c}
 * #include <stdio.h>
 * #include "movement.h"
 *
 * int main(void)
 * {
 *     float posizione = 10.0f;
 *     float velocita = 5.0f;
 *     float accelerazione = 2.0f;
 *     float tempo = 3.0f;
 *     float massa = 8.0f;
 *
 *     printf("Nuova posizione: %.2f\n",
 *         nuovaPosizione(posizione, velocita, tempo));
 *     printf("Nuova velocita: %.2f\n",
 *         nuovaVelocita(velocita, accelerazione, tempo));
 *     printf("Distanza percorsa: %.2f\n",
 *         distanza(posizione, nuovaPosizione(posizione, velocita, tempo)));
 *     printf("Energia cinetica: %.2f\n",
 *         energiaCinetica(massa, nuovaVelocita(velocita, accelerazione, tempo)));
 *
 *     return 0;
 * }
 * @endcode
 * @section build_sec Compilazione
 * @subsection separate_sec Compilazione separata
 * @code{.sh}
 * gcc -std=c17 -Wall -Wextra -Wpedantic -c main.c -o main.o
 * gcc -std=c17 -Wall -Wextra -Wpedantic -c movement.c -o movement.o
 * gcc main.o movement.o -o challenge2
 * @endcode
 * @subsection single_sec Compilazione e linking in un unico comando
 * @code{.sh}
 * gcc -std=c17 -Wall -Wextra -Wpedantic main.c movement.c -o challenge2
 * @endcode
 * @subsection phases_sec Preprocessamento, compilazione, assemblaggio e linking separati
 * Per osservare le fasi distinte:
 * @code{.sh}
 * # Solo pre-elaborazione (preprocessing, cpp)
 * gcc -std=c17 -E main.c -o main.i
 * gcc -std=c17 -E movement.c -o movement.i
 * # Solo generazione dei file assembly (compilation, cc)
 * gcc -std=c17 -S main.i -o main.s
 * gcc -std=c17 -S movement.i -o movement.s
 * # Solo assemblaggio in file oggetto (assembly, as)
 * gcc -c main.s -o main.o
 * gcc -c movement.s -o movement.o
 * # Solo collegamento finale (linking, ld)
 * gcc -o challenge2 main.o movement.o
 * @endcode
 */

#ifndef MOVEMENT_H
#define MOVEMENT_H

/**
 * @brief Calcola la nuova posizione assumendo velocità costante.
 * @param posizione La posizione iniziale.
 * @param velocita La velocità costante.
 * @param tempo Il tempo trascorso.
 * @return La nuova posizione.
 */
float nuovaPosizione(float posizione, float velocita, float tempo);

/**
 * @brief Calcola la nuova velocità dopo un certo intervallo di tempo.
 * @param velocitaIniziale La velocità iniziale.
 * @param accelerazione L'accelerazione costante.
 * @param tempo Il tempo trascorso.
 * @return La nuova velocità.
 */
float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo);

/**
 * @brief Calcola la distanza tra due posizioni.
 * @param x1 La prima posizione.
 * @param x2 La seconda posizione. x2 deve essere maggiore di x1.
 * @return La distanza tra le due posizioni.
 */
float distanza(float x1, float x2);

/**
 * @brief Calcola l'energia cinetica di un oggetto.
 * @param massa La massa dell'oggetto.
 * @param velocita La velocità dell'oggetto.
 * @return L'energia cinetica dell'oggetto.
 */
float energiaCinetica(float massa, float velocita);

#endif /* MOVEMENT_H */
