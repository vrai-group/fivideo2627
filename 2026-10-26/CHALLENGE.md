# Challenge 1 – Statistiche del giocatore

La traccia dettagliata del progetto è disponibile in [`01-progetto-player/CHALLENGE.md`](./funzioni-e-progetti-multifile/01-progetto-player/CHALLENGE.md).

## Obiettivo

Realizzare un piccolo programma che calcoli alcune statistiche di un personaggio di un videogioco.

Il progetto deve essere diviso in tre file:

```text
main.c
player.c
player.h

```

## Funzioni da implementare

Nel file `player.c` implementa le seguenti funzioni:

```c
int saluteTotale(int saluteBase, int bonus);
float dannoMedio(float dannoMinimo, float dannoMassimo);
float dannoAlSecondo(float danno, float attacchiAlSecondo);
float percentualeEnergia(float energiaAttuale, float energiaMassima);
```

### 1. Salute totale

La funzione:

```c
int saluteTotale(int saluteBase, int bonus);
```

deve restituire:

```c
saluteBase + bonus
```

### 2. Danno medio

La funzione:

```c
float dannoMedio(float dannoMinimo, float dannoMassimo);
```

deve calcolare la media tra il danno minimo e il danno massimo.

Formula:

```c
(dannoMinimo + dannoMassimo) / 2
```

### 3. Danno al secondo

La funzione:

```c
float dannoAlSecondo(float danno, float attacchiAlSecondo);
```

deve calcolare il DPS (*Damage Per Second*).

Formula:

```c
danno * attacchiAlSecondo
```

### 4. Percentuale di energia

La funzione:

```c
float percentualeEnergia(float energiaAttuale, float energiaMassima);
```

deve restituire la percentuale di energia disponibile.

Formula:

```c
(energiaAttuale / energiaMassima) * 100
```

---

## File `player.h`

Nel file header inserisci i prototipi delle funzioni.

---

## File `player.c`

Nel file `player.c`:

1. includi `player.h`;
2. implementa tutte le funzioni.

---

## File `main.c`

Nel `main` definisci alcuni valori di esempio (locali):

```c
int saluteBase = 100;
int bonusSalute = 25;

float dannoMinimo = 12.0;
float dannoMassimo = 20.0;

float attacchiAlSecondo = 1.5;

float energiaAttuale = 75.0;
float energiaMassima = 100.0;
```

Usa le funzioni definite in `player.c` e stampa risultati simili a:

```text
Salute totale: 125
Danno medio: 16.00
DPS: 24.00
Energia disponibile: 75.00%
```

---

## Struttura finale del progetto

```text
progetto_player/
│
├── main.c
├── player.c
└── player.h
```

---

# Challenge 2 – Movimento di un oggetto di gioco

La traccia dettagliata del progetto è disponibile in [`02-progetto-movement/CHALLENGE.md`](./funzioni-e-progetti-multifile/02-progetto-movement/CHALLENGE.md).

## Obiettivo

Realizzare un piccolo modulo per effettuare alcuni calcoli legati al movimento di un oggetto in un videogioco.

Il progetto deve essere diviso in:

```text
main.c
movement.c
movement.h

```

## Funzioni da implementare

Nel file `movement.c` implementa:

```c
float nuovaPosizione(float posizione, float velocita, float tempo);

float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo);

float distanza(float x1, float x2);

float energiaCinetica(float massa, float velocita);

```

---

## 1. Nuova posizione

La funzione:

```c
float nuovaPosizione(float posizione, float velocita, float tempo);

```

deve calcolare la nuova posizione assumendo velocità costante.

Formula:

```c
nuova posizione = posizione + velocita * tempo

```

---

## 2. Nuova velocità

La funzione:

```c
float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo);

```

deve calcolare la velocità dopo un certo intervallo di tempo.

Formula:

```c
nuova velocita = velocitaIniziale + accelerazione * tempo

```

---

## 3. Distanza tra due posizioni

La funzione:

```c
float distanza(float x1, float x2);

```

deve calcolare:

```c
x2 - x1

```

Per questa challenge puoi assumere che `x2` sia sempre maggiore di `x1`.

---

## 4. Energia cinetica

La funzione:

```c
float energiaCinetica(float massa, float velocita);

```

deve calcolare:

```c
E = 0.5 * massa * velocita * velocita

```

---

## File `movement.h`

Inserisci prototipi delle funzioni.

Esempio:

```c
#ifndef MOVEMENT_H
#define MOVEMENT_H

// prototipi

#endif

```

---

## File `movement.c`

Nel file `movement.c`:

1. includi `movement.h`;
2. implementa tutte le funzioni.

---

## File `main.c`

Usa valori di esempio come:

```c
float posizione = 10.0;
float velocita = 5.0;
float accelerazione = 2.0;
float tempo = 3.0;
float massa = 8.0;

```

Calcola e stampa:

* nuova posizione;
* nuova velocità;
* distanza percorsa;
* energia cinetica usando la nuova velocità.

Esempio di output:

```text
Nuova posizione: 25.00
Nuova velocita: 11.00
Distanza percorsa: 15.00
Energia cinetica: 484.00

```

---

## Struttura finale del progetto

```text
progetto_movement/
│
├── main.c
├── movement.c
└── movement.h
```
