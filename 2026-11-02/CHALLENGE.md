# Mini challenge: `if-else`, `if-else if-else` e `switch-case`

## 1. Positivo, negativo o zero

Chiedi all'utente un numero intero usando `scanf()`.

Stampa:

* `Positivo` se il numero è maggiore di 0
* `Negativo` se il numero è minore di 0
* `Zero` se il numero è uguale a 0

[Codice](./if-else-if-switch-case/01-segno.c)

### Esempio

```text
Inserisci un numero: -4
Negativo

```

---

## 2. Pari o dispari

Chiedi all'utente un numero intero.

Usa l'operatore `%` per stabilire se il numero è:

* pari
* dispari

[Codice](./if-else-if-switch-case/02-pari-o-dispari.c)

### Esempio

```text
Inserisci un numero: 7
Dispari

```

---

## 3. Classificazione di una temperatura

Chiedi all'utente una temperatura intera.

Stampa:

* `Freddo` se la temperatura è minore di 10
* `Mite` se è compresa tra 10 e 24
* `Caldo` se è maggiore o uguale a 25

[Codice](./if-else-if-switch-case/03-classificazione-temperatura.c)

### Esempio

```text
Inserisci la temperatura: 18
Mite

```

---

## 4. Valutazione di un voto

Chiedi all'utente un voto compreso tra `0` e `30`.

Stampa:

* `Insufficiente` se il voto è minore di 18
* `Sufficiente` se è compreso tra 18 e 23
* `Buono` se è compreso tra 24 e 27
* `Ottimo` se è compreso tra 28 e 30

Se il valore è minore di `0` oppure maggiore di `30`, stampa:

[Codice](./if-else-if-switch-case/04-valutazione-voto.c)

```text
Voto non valido

```

---

## 5. Prezzo con sconto

Chiedi all'utente il prezzo di un prodotto.

Applica:

* nessuno sconto se il prezzo è minore di 50 €
* 10% di sconto se il prezzo è compreso tra 50 € e 99.99 €
* 20% di sconto se il prezzo è maggiore o uguale a 100 €

Stampa il prezzo finale.

[Codice](./if-else-if-switch-case/05-prezzo.c)

### Esempio

```text
Prezzo: 120
Prezzo finale: 96.00

```

---

## 6. Inserimento controllato con `while`

Chiedi all'utente un numero compreso tra `1` e `10`.

Se il numero non è valido, continua a richiederlo finché l'utente non inserisce un valore corretto.

### Esempio

```text
Inserisci un numero da 1 a 10: 15
Valore non valido

Inserisci un numero da 1 a 10: -2
Valore non valido

Inserisci un numero da 1 a 10: 7
Valore accettato

```

### Obiettivo

Usare insieme:

```text
while
scanf
if
```

[Soluzione con `while`](./if-else-if-switch-case/06-inserimento-while.c) · [soluzione con `do-while`](./if-else-if-switch-case/06-inserimento-do-while.c)

---

## 7. Menu con `do while` e `switch`

Crea un piccolo menu:

```text
1 - Somma due numeri
2 - Calcola il quadrato di un numero
3 - Calcola il doppio di un numero
0 - Esci

```

Leggi la scelta dell'utente con `scanf()`.

Usa uno `switch` per gestire le diverse opzioni.

Il menu deve essere ripetuto con `do while` finché l'utente non sceglie `0`.

### Struttura suggerita

```c
do {

    printf("1 - Somma\n");
    printf("2 - Quadrato\n");
    printf("3 - Doppio\n");
    printf("0 - Esci\n");

    scanf("%d", &scelta);

    switch (scelta) {

        case 1:
            // ...
            break;

        case 2:
            // ...
            break;

        case 3:
            // ...
            break;

        case 0:
            // ...
            break;

        default:
            // scelta non valida
            break;
    }

} while (scelta != 0);

```

[Codice](./if-else-if-switch-case/07-menu.c)

---

## 8. Mini calcolatrice con `switch`

Chiedi all'utente:

1. un primo numero
2. un secondo numero
3. un'operazione

Puoi usare questo menu:

```text
1 - Addizione
2 - Sottrazione
3 - Moltiplicazione
4 - Divisione

```

Usa `switch case` per eseguire l'operazione scelta.

Per la divisione, usa un `if` per controllare che il secondo numero sia diverso da zero.

### Obiettivo

Combinare:

* `scanf()`
* `switch`
* `if`
* operatori aritmetici

[Codice](./if-else-if-switch-case/08-calcolatrice.c)

---

## 9. Menu con ripetizione e controllo input

Crea un programma che mostri il seguente menu:

```text
1 - Verifica se un numero è pari o dispari
2 - Verifica se un numero è positivo o negativo
3 - Calcola il quadrato di un numero
0 - Esci

```

Il menu deve essere ripetuto con `do while`.

Usa:

* `switch` per selezionare l'operazione
* `if / else` all'interno dei `case`
* `scanf()` per leggere i valori

Se l'utente inserisce una scelta diversa da `0`, `1`, `2` o `3`, stampa:

[Codice](./if-else-if-switch-case/09-menu-ripetizione.c)

```text
Scelta non valida

```

