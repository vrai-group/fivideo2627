/*
file: raffreddamento.c

Raffreddamento semplificato con `while`

Un componente parte da una temperatura di:

```
120 °C

```

Ogni minuto la temperatura diminuisce di:

```
8 °C

```

Usa un ciclo `while` per simulare il raffreddamento finché la temperatura è maggiore di `40 °C`.

A ogni iterazione stampa:

* il minuto trascorso
* la temperatura corrente

### Esempio

```
Minuto 1: 112 °C
Minuto 2: 104 °C
...

```

Alla fine stampa quanti minuti sono trascorsi.

*/
#include<stdio.h>

int main(void) {
    int temperatura = 120;
    int minuto = 0;

    while (temperatura > 40) {
        temperatura -= 8;
        minuto++;
        printf("Minuto %d: %d C\n", minuto, temperatura);
    }

    printf("Minuti trascorsi: %d\n", minuto);
    return 0;
}