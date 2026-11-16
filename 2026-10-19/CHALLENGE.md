# Mini Challenge in C – Funzioni

Queste mini challenge servono per esercitarsi con le **funzioni in C**.

**Non usare ancora**:

* `if`
* `for`
* `while`

Puoi usare:

* tipi base
* variabili
* operatori aritmetici
* `printf`
* `return`
* operatore ternario `? :`

---

## 1. Somma di due numeri

Scrivi una funzione:

```c
int somma(int a, int b)
```

che restituisce la somma dei due valori.

**Esempio**

```c
somma(4, 6)
```

restituisce:

```c
10
```

[codice](./02-funzioni/01-somma-di-due-numeri/01-somma-di-due-numeri.c)

---

## 2. Area di un rettangolo

Scrivi una funzione:

```c
float areaRettangolo(float base, float altezza)
```

che restituisce l'area del rettangolo.

**Esempio**

```c
areaRettangolo(5.0, 3.0)
```

restituisce:

```c
15.0
```

[codice](./02-funzioni/02-area-rettangolo/02-area-rettangolo.c)

---

## 3. Media di tre numeri

Scrivi una funzione:

```c
float media(float a, float b, float c)
```

che restituisce la media dei tre valori.

**Esempio**

```c
media(6.0, 8.0, 10.0)
```

restituisce:

```c
8.0
```

[codice](./02-funzioni/03-media-di-tre-numeri/03-media-di-tre-numeri.c)

---

## 4. Numero maggiore

Scrivi una funzione:

```c
int maggiore(int a, int b)
```

che restituisce il numero maggiore tra i due parametri.

Non puoi usare `if`.

Usa l'operatore ternario.

**Esempio**

```c
maggiore(12, 7)
```

restituisce:

```c
12
```

[codice](./02-funzioni/04-numero-maggiore/04-numero-maggiore.c)

---

## 5. Valore assoluto

Scrivi una funzione:

```c
int valoreAssoluto(int numero)
```

che restituisce il valore assoluto del numero.

Non puoi usare `if`.

Usa l'operatore ternario.

**Esempio**

```c
valoreAssoluto(-7)
```

restituisce:

```c
7
```

[codice](./02-funzioni/05-valore-assoluto/05-valore-assoluto.c)

---

## 6. Calcola lo sconto

Scrivi una funzione:

```c
float prezzoScontato(float prezzo, float sconto)
```

che restituisce il prezzo finale dopo aver applicato uno sconto percentuale.

**Esempio**

```c
prezzoScontato(100, 20)
```

restituisce:

```c
80
```

[codice](./02-funzioni/06-calcola-lo-sconto/06-calcola-lo-sconto.c)

---

## 7. Il maggiore tra tre numeri

Scrivi una funzione:

```c
int maggioreTre(int a, int b, int c)
```

che restituisce il numero maggiore tra i tre parametri.

Non puoi usare `if`.

Prova a risolvere il problema usando uno o più operatori ternari.

**Esempio**

```c
maggioreTre(4, 12, 9)
```

restituisce:

```c
12
```

[codice](./02-funzioni/07-maggiore-tra-tre-numeri/07-maggiore-tra-tre-numeri.c)