# Challenge 2 – Movimento di un oggetto di gioco
## Obiettivo
Realizzare un piccolo modulo per effettuare alcuni calcoli legati al movimento di un oggetto in un videogioco.

Il progetto deve essere diviso in:

- [`main.c`](./main.c)
- [`movement.c`](./movement.c)
- [`movement.h`](./movement.h)

## Funzioni da implementare
Nel file `movement.c` implementa:


- `float nuovaPosizione(float posizione, float velocita, float tempo);`
- `float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo);`
- `float distanza(float x1, float x2);`
- `float energiaCinetica(float massa, float velocita);`

### 1. Nuova posizione
La funzione:

`float nuovaPosizione(float posizione, float velocita, float tempo);`

deve calcolare la nuova posizione assumendo velocità costante.

Formula: `nuova posizione = posizione + velocita * tempo`
### 2. Nuova velocità
La funzione:

`float nuovaVelocita(float velocitaIniziale, float accelerazione, float tempo);`

deve calcolare la velocità dopo un certo intervallo di tempo.

Formula: `nuova velocita = velocitaIniziale + accelerazione * tempo`
### 3. Distanza tra due posizioni
La funzione:

`float distanza(float x1, float x2);`

deve calcolare:

`x2 - x1`

Per questa challenge puoi assumere che ``x2`` sia sempre maggiore di `x1`.

### 4. Energia cinetica
La funzione:

`float energiaCinetica(float massa, float velocita);`

deve calcolare:

`E = 0.5 * massa * velocita * velocita`

## File `movement.h`
Inserisci prototipi delle funzioni.

**Esempio**:

```c
#ifndef MOVEMENT_H
#define MOVEMENT_H

// prototipi

#endif
```

## File `movement.c`
Nel file `movement.c`:

1. includi `movement.h`;
2. implementa tutte le funzioni.

### File `main.c`
Usa valori di esempio come:

```c
float posizione = 10.0;
float velocita = 5.0;
float accelerazione = 2.0;
float tempo = 3.0;
float massa = 8.0;
```

Calcola e stampa:

- nuova posizione;
- nuova velocità;
- distanza percorsa;
- energia cinetica usando la nuova velocità.

**Esempio di output**:

```txt
Nuova posizione: 25.00
Nuova velocita: 11.00
Distanza percorsa: 15.00
Energia cinetica: 484.00
```

## Struttura finale del progetto

```txt
progetto_movement/
│
├── main.c
├── movement.c
└── movement.h
```
