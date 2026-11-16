# Challenge 1 – Statistiche del giocatore
## Obiettivo
Realizzare un piccolo programma che calcoli alcune statistiche di un personaggio di un videogioco.

Il progetto deve essere diviso in tre file:

- [`main.c`](./main.c)
- [`player.c`](./player.c)
- [`player.h`](./player.h)

## Funzioni da implementare

Nel file `player.c `implementa le seguenti funzioni:

- `int saluteTotale(int saluteBase, int bonus);`
- `float dannoMedio(float dannoMinimo, float dannoMassimo);`
- `float dannoAlSecondo(float danno, float attacchiAlSecondo);`
- `float percentualeEnergia(float energiaAttuale, float energiaMassima);`

1. Salute totale

   La funzione:
  
   `int saluteTotale(int saluteBase, int bonus);`
    
   deve restituire:

   `saluteBase + bonus`
2. Danno medio

   La funzione:

   `float dannoMedio(float dannoMinimo, float dannoMassimo);`
   
   deve calcolare la media tra il danno minimo e il danno massimo.

   Formula: `(dannoMinimo + dannoMassimo) / 2`
3. Danno al secondo

   La funzione:

   `float dannoAlSecondo(float danno, float attacchiAlSecondo);`

   deve calcolare il DPS (*Damage Per Second*).

    Formula: `danno * attacchiAlSecondo`
4. Percentuale di energia
    
    La funzione:
    
    `float percentualeEnergia(float energiaAttuale, float energiaMassima);`

    deve restituire la percentuale di energia disponibile.
    
    Formula:`(energiaAttuale / energiaMassima) * 100`

## File `player.h`
Nel file header inserisci i prototipi delle funzioni.

 
## File `player.c`
Nel file `player.c`:


1. includi `player.h`;
2. implementa tutte le funzioni.

## File `main.c`
Nel main definisci alcuni valori di esempio (locali):

```cpp[main.c]
int saluteBase = 100;
int bonusSalute = 25;

float dannoMinimo = 12.0;
float dannoMassimo = 20.0;

float attacchiAlSecondo = 1.5;

float energiaAttuale = 75.0;
float energiaMassima = 100.0;
```

Usa le funzioni definite in `player.c` e stampa risultati simili a:

```txt
Salute totale: 125
Danno medio: 16.00
DPS: 24.00
Energia disponibile: 75.00%
```

## Struttura finale del progetto

```
progetto_player/
│
├── main.c
├── player.c
└── player.h
```
