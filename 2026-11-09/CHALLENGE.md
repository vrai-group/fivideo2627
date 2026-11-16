# Mini-challenge `while`, `do-while` e `for`

## 1. Conta da 1 a N con `while`

Chiedi all'utente un numero intero positivo `N` usando `scanf()`.

Stampa tutti i numeri da `1` a `N` usando un ciclo `while`.

[Codice](./while-dowhile-for/conta.c)

### Esempio

```
Inserisci N: 5
1 2 3 4 5

```

---

## 2. Somma dei primi N numeri con `for`

Chiedi all'utente un numero intero `N`.

Calcola la somma:

```
1 + 2 + 3 + ... + N

```

usando un ciclo `for`.

[Codice](./while-dowhile-for/somma.c)

### Esempio

```
Inserisci N: 5
Somma = 15

```

---

## 3. Tabellina con `for`

Chiedi all'utente un numero intero.

Stampa la sua tabellina da `1` a `10`.

[Codice](./while-dowhile-for/tabellina.c)

### Esempio

```
Inserisci un numero: 7

7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
...
7 x 10 = 70

```

---

## 4. Inserimento controllato con `do while`

Chiedi all'utente un numero compreso tra `1` e `100`.

Se il numero non è valido, continua a richiederlo usando un ciclo `do while`.

Quando il valore è corretto, stampa:

```
Valore accettato

```

[Codice](./while-dowhile-for/inserimento.c)

### Obiettivo

Capire quando `do while` è utile: il blocco viene eseguito almeno una volta.

---

## 5. Raffreddamento semplificato con `while`

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

[Codice](./while-dowhile-for/raffreddamento.c)

---

## 6. Analisi di N misure con `for`

Chiedi all'utente quante misure vuole inserire.

Poi usa un ciclo `for` per leggere `N` valori usando `scanf()`.

Durante il ciclo:

* calcola la somma delle misure
* conta quante misure sono positive
* trova il valore massimo

Alla fine stampa:

```
Media: ...
Numero di valori positivi: ...
Massimo: ...

```

### Obiettivo

Combinare:

* `for`
* `scanf()`
* accumulatore
* contatore
* confronto tra valori

[Codice](./while-dowhile-for/misure.c)

---
