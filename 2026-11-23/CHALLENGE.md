# Mini-challenge array e stringhe

## 1. Somma e media di un array

Dato:

```c
int valori[5] = {10, 20, 30, 40, 50};
```

usa un ciclo `for` per:

* stampare tutti gli elementi;
* calcolare la somma;
* calcolare la media.

[Codice](./array-e-stringhe/01-somma-e-media.c)

### Obiettivo

Capire come accedere agli elementi di un array tramite indice.

---

## 2. Trova massimo e minimo

Dato:

```c
int valori[6] = {12, 4, 25, 8, 30, 3};
```

trova:

* il valore massimo;
* il valore minimo;
* l'indice del valore massimo.

Non usare funzioni già pronte.

[Codice](./array-e-stringhe/02-massimo-e-minimo.c)

### Esempio

```text
Massimo: 30
Minimo: 3
Indice del massimo: 4
```

---

## 3. Conta i caratteri di una stringa

Data:

```c
char parola[] = "programmazione";
```

conta manualmente quanti caratteri contiene la stringa.

Non usare:

```c
strlen()
```

Ricorda che una stringa termina con:

```c
'\0'
```

### Estensione

Conta quante volte compare la lettera:

```c
'a'
```

[Codice](./array-e-stringhe/03-conta-caratteri.c)

---

## 4. Conta vocali e consonanti

Data:

```c
char testo[] = "videogame";
```

scorri tutti i caratteri della stringa e conta:

* vocali;
* consonanti.

Puoi assumere che la stringa contenga solo lettere minuscole.

### Esempio

```text
Vocali: 5
Consonanti: 4
```

---

## 5. Invertire una stringa

Data:

```c
char parola[] = "motore";
```

stampa la stringa al contrario:

```text
erotom
```

### Suggerimento

Prima trova la lunghezza della stringa.

Poi usa un ciclo che parte dall'ultimo carattere e procede verso il primo.

### Estensione

Crea una seconda stringa che contenga realmente la versione invertita.

[Codice](./array-e-stringhe/05-inverti-stringa.c)

---

## 6. Statistiche su una sequenza di misure

Dato:

```c
float misure[6] = {9.8, 10.2, 9.9, 10.5, 10.1, 9.7};

```

scrivi le seguenti funzioni:

```c
float media(float valori[], int dimensione);

float massimo(float valori[], int dimensione);

int contaSopraMedia(float valori[], int dimensione, float media);

```

Il programma deve:

* calcolare la media;
* trovare il massimo;
* contare quanti valori sono maggiori della media.

[Codice](./array-e-stringhe/06-statistiche-misure.c)

### Obiettivo

Combinare:

* array
* funzioni
* cicli
* parametri
* elaborazione di dati numerici
