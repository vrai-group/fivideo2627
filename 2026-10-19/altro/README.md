# Approssimazione della radice quadrata con il metodo di Erone di Alessandria

## Obiettivo didattico

1. Verificare come sia possibile risolvere problemi complessi con i soli costrutti di programmazione appresi fino ad ora:
   - valori, tipi, operatori (in particolare l'**operatore ternario**)
   - definizione e dichiarazione di funzioni
   - chiamata di funzioni (incluse funzioni che chiamano se stesse)
2. Sperimentare la programmazione strutturata con analisi top-down.
3. Verificare come la costruzione di funzioni semplici, idealmente di una sola riga, permetta di controllare la correttezza "locale" di un programma.
4. Sperimentare l'ordine di valutazione degli argomenti di una funzione.

## Problema

Definire la funzione `float radq(float x)` che approssima la radice quadrata del parametro `x` con il metodo di Erone di Alessandria.

## Algoritmo

Erone di Alessandria considera che il problema di trovare $\alpha$ tale che $\alpha = \sqrt{x}$ corrisponda, geometricamente, al problema di trovare il lato del quadrato di area $x$. Sappiamo che il quadrato è un particolare rettangolo con base e altezza uguali.

Possiamo fornire una stima iniziale del lato del quadrato, `stima`, e verificare se tale stima sia sufficientemente accurata.
Stabiliamo che la stima è accurata se il valore assoluto della differenza tra `x` e il quadrato della stima è minore di $10^{-6}$ (`0.000001`).

Se la stima non è accurata, possiamo provare con una nuova stima migliore della precedente. Per calcolare una stima migliore, consideriamo che il valore `stima` inserito rappresenta un lato di un rettangolo e che l'altro lato del rettangolo equivalente al quadrato cercato è dato dal rapporto $x / \text{stima}$. Come nuova stima possiamo quindi usare la media aritmetica tra i due lati.

Definiamo come stima iniziale, per qualunque radicando `x`, il valore `1.0`.

## Compito

Realizzare un programma in C che implementi il metodo di Erone di Alessandria usando funzioni di una sola riga, senza fare uso di strutture di controllo del flusso di esecuzione tradizionali (`if`, `while`, `for`), tramite espressioni che usano l'operatore ternario e le chiamate a funzione.

## Verifica dell'esecuzione con PythonTutor

Per comprendere appieno come la macchina esegue questo programma ed esaminare l'evoluzione del processo in memoria, scrivi il programma per calcolare la radice quadrata di 2 e visualizza l'esecuzione del codice su **[PythonTutor (C Tutor)](https://pythontutor.com/c.html)**.

In particolare, imposta *C/C++ details* a *show memory addresses* eanalizza lo stato dei **stack frame** durante la simulazione per verificare i seguenti tre concetti fondamentali:

1. **Passaggio dei parametri per copia (pass-by-value):**
   - Osserva che ogni volta che una funzione viene invocata, si crea un nuovo frame in memoria contenente una *copia locale* dei valori degli argomenti. 
   - La modifica o il calcolo eseguito sui parametri all'interno di una funzione non altera mai le variabili del chiamante.

2. **Indipendenza dei frame e chiamate annidate:**
   - Nota come le funzioni chiamino altre funzioni (es. `radq_iter` chiama `accurata` e `migliora`) creando una pila di frame sovrapposti (*Call Stack*).
   - Ogni funzione possiede un proprio ambito (*scope*) riservato e "vede" esclusivamente i propri parametri e variabili locali.
   - Nel caso di `radq_iter`, osserva l'accumulo dei frame sulla pila ad ogni chiamata fino al raggiungimento del caso (`accurata == 1`), punto in cui i frame iniziano a contrarsi restituendo i valori.

3. **Valutazione degli argomenti (in-to-out):**
   - Osserva che prima di poter invocare una funzione "esterna", il *runtime* deve valutare completamente le espressioni passate come argomento (le funzioni "interne").
   - Ad esempio, nella chiamata `radq_iter(x, migliora(stima, x))`, il frame di `migliora` viene creato ed eseguito *prima* che possa essere effettuata la nuova chiamata ricorsiva a `radq_iter`.
   