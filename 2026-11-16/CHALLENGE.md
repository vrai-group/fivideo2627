# Mini Challenge C – Puntatori, Funzioni e Procedure

L'obiettivo è capire bene:

* indirizzo di una variabile
* operatore `&`
* operatore `*`
* dereferenziazione
* passaggio di un indirizzo a una funzione
* differenza tra **funzione** e **procedura**

---

## 1. Indirizzo e valore

Dichiara:

```c
int numero = 10;
```

Poi crea un puntatore:

```c
int *p = &numero;
```

Stampa:

* il valore di `numero`
* l'indirizzo di `numero`
* il contenuto di `p`
* il valore puntato da `p`

Usa:

```c
%p
```

per stampare gli indirizzi.

[Codice](./puntatori/01-indirizzo-e-valore.c)

### Obiettivo

Capire la differenza tra:

```c
p
```

e:

```c
*p
```

---

## 2. Modificare una variabile tramite puntatore

Parti da:

```c
int numero = 5;
int *p = &numero;
```

Usa il puntatore per cambiare il valore di `numero` in `20`.

Non modificare direttamente `numero`.

Alla fine stampa:

```c
20
```

### Obiettivo

Capire che:

```c
*p = 20;
```

modifica la variabile puntata.

[Codice](./puntatori/02-modifica-tramite-puntatore.c)

---

## 3. Funzione che restituisce un risultato

Scrivi una funzione:

```c
int doppio(int valore);
```

che restituisce il doppio del valore ricevuto.

Esempio:

```c
int risultato = doppio(5);
```

deve produrre:

```c
10
```

### Domanda

La variabile originale passata alla funzione viene modificata?

[Codice](./puntatori/03-funzione-doppio.c)

---

## 4. Procedura che modifica una variabile

Scrivi una procedura:

```c
void raddoppia(int *valore);
```

che modifica direttamente la variabile ricevuta tramite puntatore.

Esempio:

```c
int numero = 5;
raddoppia(&numero);
printf("%d\n", numero);
```

Output:

```c
10
```

### Obiettivo

Confronta questa procedura con la funzione precedente.

#### Funzione

```c
int doppio(int valore);
```

* riceve un valore
* calcola un risultato
* restituisce il risultato con `return`

#### Procedura

```c
void raddoppia(int *valore);
```

* riceve un indirizzo
* modifica direttamente la variabile
* non restituisce un valore

[Codice](./puntatori/04-procedura-raddoppia.c)

---

## 5. Incrementa tramite puntatore

Scrivi una procedura:

```c
void incrementa(int *numero);
```

che aumenti di `1` il valore della variabile.

Esempio:

```c
int x = 7;
incrementa(&x);
printf("%d\n", x);
```

Output:

```c
8
```

Prova a chiamare la procedura più volte:

```c
incrementa(&x);
incrementa(&x);
incrementa(&x);
```

[Codice](./puntatori/05-incrementa.c)

---

## 6. Scambio di due variabili

Scrivi una procedura:

```c
void scambia(int *a, int *b);
```

che scambi il contenuto di due variabili.

Parti da:

```c
int x = 10;
int y = 20;
```

Dopo:

```c
scambia(&x, &y);
```

devi ottenere:

```c
x = 20
y = 10
```

Puoi usare una variabile temporanea:

```c
int temp;
```

### Domanda

Sarebbe possibile ottenere lo stesso effetto passando semplicemente:

```c
scambia(x, y);
```

senza usare puntatori?

[Codice](./puntatori/06-scambia.c)

---

## 7. Funzione o procedura?

Per ciascuno dei seguenti problemi, scegli se è più adatta una **funzione** oppure una **procedura con puntatore**.

### A

Calcolare il quadrato di un numero senza modificare il numero originale.

### B

Portare a zero una variabile esistente.

### C

Calcolare la metà di un numero e restituire il risultato.

### D

Aumentare direttamente del 10% il valore di una variabile `float`.

### E

Scambiare il valore di due variabili.

Per ogni caso, prova anche a scrivere il prototipo.

Esempio:

```c
float quadrato(float x);
```

oppure:

```c
void azzera(int *x);
```

---

## Challenge finale – Funzione e procedura a confronto

Realizza entrambe le versioni dello stesso problema. [Esempio](./puntatori/07-funzione-e-procedura.c).

### Versione 1 – Funzione

```c
int triplo(int valore);
```

La funzione deve restituire il triplo del valore ricevuto.

Utilizzo:

```c
int numero = 4;
int risultato = triplo(numero);
```

Alla fine:

```c
numero = 4
risultato = 12
```

---

### Versione 2 – Procedura

```c
void triplica(int *valore);
```

La procedura deve modificare direttamente la variabile.

Utilizzo:

```c
int numero = 4;
triplica(&numero);
```

Alla fine:

```c
numero = 12
```

---

## Concetto chiave

Confronta:

```c
int risultato = funzione(numero);
```

con:

```c
procedura(&numero);
```

Nel primo caso la funzione **restituisce un nuovo valore**.

Nel secondo caso la procedura riceve **l'indirizzo della variabile** e può modificarne direttamente il contenuto.

---
