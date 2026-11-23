# Pattern Elementari di Programmazione: Ruoli delle Variabili, Selezione e Cicli

Questo documento sintetizza i **pattern elementari di programmazione** (*Elementary Programming Patterns*) relativi all'uso delle variabili e alle strutture di controllo del flusso (selezione e iterazione), affiancando alla terminologia italiana quella originale in inglese e illustrando ciascun concetto con esempi idiomatici in linguaggio **C**.

L'obiettivo didattico dei pattern elementari è spostare l'attenzione dalla mera **sintassi** del linguaggio alla **semantica d'uso**: riconoscere schemi ricorrenti (*plans* o *patterns*) consente di leggere, progettare e verificare il codice con maggiore sicurezza.

---

## 1. Ruoli delle Variabili (*Roles of Variables*)

Il ruolo di una variabile non dipende dal suo tipo sintattico (`int`, `float`, `char*`), ma dal suo **comportamento dinamico** nel tempo: come viene inizializzata, come viene aggiornata e con quale scopo partecipa all'algoritmo.

### 1.1 Valore fisso (*Fixed value*)
Variabile il cui valore non cambia più dopo l'inizializzazione (costante logica o input immutabile).

```c
const float ALIQUOTA_IVA = 0.22f; // Fixed value
int n;
scanf("%d", &n);                  // Fixed value dopo la lettura iniziale

```

### 1.2 Contapassi (*Stepper*)

Variabile che assume una sequenza sistematica e prevedibile di valori (es. indici o puntatori che avanzano a passo regolare).

```c
for (int i = 0; i < n; i++) { // 'i' è uno Stepper (0, 1, 2, ...)
    printf("%d\n", vettore[i]);
}
```

### 1.3 Contenitore del valore più recente (*Most-recent holder*)

Variabile che conserva l'ultimo valore letto da una sorgente esterna o l'ultimo elemento estratto da una sequenza, sovrascrivendo il precedente senza dipenderne.

```c
int dato;
do {
    scanf("%d", &dato); // 'dato' contiene di volta in volta l'ultimo valore inserito
} while (dato != 0);
```

### 1.4 Contenitore del valore migliore (*Most-wanted holder*)

Variabile che memorizza il valore "migliore" (massimo, minimo, candidato più vicino a un criterio) incontrato finora; viene aggiornata solo condizionalmente.

```c
int massimo = v[0]; // Most-wanted holder
for (int i = 1; i < n; i++) {
    if (v[i] > massimo) {
        massimo = v[i];
    }
}
```

### 1.5 Raccoglitore (*Gatherer*)

Variabile che accumula l'effetto di tutti i valori elaborati finora; il nuovo valore dipende dal valore precedente della variabile stessa e dal nuovo dato (somme, prodotti, conteggi).

```c
int somma = 0; // Gatherer
for (int i = 0; i < n; i++) {
    somma += v[i];
}
```

### 1.6 Trasformatore (*Transformation*)

Variabile che ottiene sempre il proprio valore applicando lo stesso calcolo deterministico a partire da una o più altre variabili.

```c
float fahrenheit = celsius * 9.0f / 5.0f + 32.0f; // Transformation
```

### 1.7 Segugio / Inseguitore (*Follower*)

Variabile che conserva il valore precedente di un'altra variabile per confrontare lo stato attuale con quello immediatamente antecedente.

```c
int precedente = v[0]; // Follower
for (int i = 1; i < n; i++) {
    if (v[i] == precedente) {
        printf("Valori uguali consecutivi\n");
    }
    precedente = v[i];
}
```

### 1.8 Bandiera a senso unico (*One-way flag*)

Variabile booleana (o intera) che parte da uno stato iniziale e, una volta commutata al verificarsi di una condizione, non torna più allo stato di partenza.

```c
int trovato = 0; // One-way flag
for (int i = 0; i < n; i++) {
    if (v[i] == target) {
        trovato = 1;
    }
}
```

### 1.9 Temporanea (*Temporary*)

Variabile usata per un brevissimo intervallo di codice per conservare un valore di appoggio (es. durante uno scambio).

```c
int temp = a; // Temporary
a = b;
b = temp;
```

### 1.10 Organizzatore (*Organizer*)

Struttura dati (es. array o stringa) i cui elementi vengono riordinati o riorganizzati sul posto senza aggiungerne né rimuoverne.

```c
// Inversione sul posto: 'v' agisce da Organizer
for (int i = 0; i < n / 2; i++) {
    int temp = v[i];
    v[i] = v[n - 1 - i];
    v[n - 1 - i] = temp;
}
```

---

## 2. Pattern Elementari di Selezione (*Selection Patterns*)

I pattern di selezione organizzano le decisioni condizionali (`if`, `else`, `switch`, `?:`) per evitare ridondanze, rami irraggiungibili o duplicazione di codice (Bergin et al., *Selection Patterns*).

### 2.1 Esecuzione condizionata / Guardia (*Guarded Action* / *One-Way Selection*)

Eseguire un blocco di istruzioni solo quando una precondizione è soddisfatta, lasciando invariato lo stato in caso contrario.

```c
if (divisore != 0) {
    quoziente = dividendo / divisore;
}
```

### 2.2 Scelta alternativa (*Alternative Action* / *Two-Way Selection*)

Scegliere tra due azioni mutuamente esclusive che coprono l'intero dominio dei casi possibili.

```c
if (numero % 2 == 0) {
    printf("Pari\n");
} else {
    printf("Dispari\n");
}
```

### 2.3 Classificazione multipla (*Multi-Way Classification* / *Sequential Cases*)

Partizionare un dominio continuo o discreto in intervalli o categorie disgiunte mediante una catena `if - else if - else`, ordinando le condizioni dal caso più restrittivo al più generale.

```c
if (temperatura < 10.0f) {
    printf("Freddo\n");
} else if (temperatura <= 25.0f) {
    printf("Mite\n");
} else {
    printf("Caldo\n");
}
```

### 2.4 Selezione di valori discreti (*Discrete Dispatch* / *Case Selection*)

Smistare il flusso su rami distinti in base al valore esatto di un'espressione intera o carattere tramite `switch`.

```c
switch (comando) {
    case 'w': y++; break;
    case 's': y--; break;
    case 'a': x--; break;
    case 'd': x++; break;
    default:  printf("Comando non valido\n"); break;
}
```

### 2.5 Fattore comune / Estrazione dell'invariante (*Factoring Out Common Code*)

Estrarre fuori dai rami `if` ed `else` le istruzioni identiche eseguite in entrambi i casi, evitando duplicazione.

```c
// Forma fattorizzata: il calcolo comune sta fuori dalla selezione
float sconto = (totale > 100.0f) ? 0.10f : 0.0f;
float prezzoFinale = totale * (1.0f - sconto);
```

### 2.6 Clima / Ritorno anticipato (*Guard Clause* / *Early Exit*)

Gestire immediatamente i casi anomali o banali all'inizio di una funzione per ridurre l'annidamento (*nesting*) del codice principale.

```c
float media(const int v[], int n) {
    if (n <= 0) {
        return 0.0f; // Guard clause
    }
    int somma = 0;
    for (int i = 0; i < n; i++) {
        somma += v[i];
    }
    return (float)somma / n;
}
```

---

## 3. Pattern Elementari di Iterazione (*Loop Patterns*)

I pattern di iterazione strutturano la ripetizione combinando una strategia di controllo del ciclo con uno o più ruoli di variabili (Wallingford, *Roundabout: Loop Patterns*; CS-Ed UniBo).

### 3.1 Ciclo con contatore (*Counted Loop* / *Process All Items*)

Eseguire un blocco un numero noto di volte o visitare tutti gli elementi di una collezione indicizzata usando uno `Stepper`.

```c
for (int i = 0; i < n; i++) {
    printf("Elemento %d: %d\n", i, v[i]);
}
```

### 3.2 Ciclo con sentinella (*Sentinel Loop*)

Ripetere l'elaborazione fino a quando non si incontra un valore speciale (*sentinel*) che segnala la fine dei dati (es. `0` in input o `'\0'` nelle stringhe C).

```c
int lunghezza = 0;
while (stringa[lunghezza] != '\0') { // '\0' è la sentinella
    lunghezza++;
}
```

### 3.3 Lettura anticipata / Adescamento (*Loop and a Half* / *Priming Read*)

Leggere il primo dato prima del ciclo per poter valutare la condizione di permanenza, poi aggiornare il *Most-recent holder* alla fine del corpo del ciclo (oppure usare un ciclo con uscita intermedia).

```c
int x;
scanf("%d", &x);       // Priming read
while (x >= 0) {       // -1 funge da sentinella
    somma += x;
    scanf("%d", &x);   // Aggiornamento per l'iterazione successiva
}
```

### 3.4 Validazione dell'input (*Input Validation Loop* / *Do-While Guard*)

Chiedere ripetutamente un dato all'utente finché non soddisfa un predicato di validità; richiede almeno un'esecuzione (`do-while`).

```c
int voto;
do {
    printf("Inserisci un voto (18-30): ");
    scanf("%d", &voto);
} while (voto < 18 || voto > 30);
```

### 3.5 Accumulazione / Riduzione (*Accumulation* / *Reduce Pattern*)

Combinare tutti gli elementi di una sequenza in un singolo valore tramite un `Gatherer` inizializzato all'elemento neutro dell'operazione (`0` per la somma, `1` per il prodotto).

```c
int prodotto = 1; // Elemento neutro della moltiplicazione
for (int i = 0; i < n; i++) {
    prodotto *= v[i];
}
```

### 3.6 Filtro e conteggio (*Filter and Count*)

Combinare un ciclo con una selezione interna per incrementare un `Gatherer` solo sugli elementi che soddisfano un predicato.

```c
int positivi = 0;
for (int i = 0; i < n; i++) {
    if (v[i] > 0) {
        positivi++;
    }
}
```

### 3.7 Selezione dell'estremo (*Extreme Selection* / *Best-So-Far Loop*)

Scandire una sequenza non vuota mantenendo un `Most-wanted holder` inizializzato al primo elemento.

```c
int min = v[0];
for (int i = 1; i < n; i++) {
    if (v[i] < min) {
        min = v[i];
    }
}
```

### 3.8 Ricerca lineare (*Linear Search* / *Search Loop*)

Cercare un elemento che soddisfa una condizione arrestandosi appena lo si trova (tramite `break`/`return` oppure condizione composta con `One-way flag`).

```c
int indiceTrovato = -1;
for (int i = 0; i < n && indiceTrovato == -1; i++) {
    if (v[i] == chiave) {
        indiceTrovato = i;
    }
}
```

### 3.9 Confronto tra elementi adiacenti (*Adjacent Pair Comparison* / *Follower Loop*)

Analizzare coppie consecutive $(x_{i-1}, x_i)$ utilizzando uno `Stepper` che parte da `1` (con accesso a `v[i - 1]`) oppure una variabile `Follower`.

```c
int ordinato = 1; // One-way flag
for (int i = 1; i < n; i++) {
    if (v[i] < v[i - 1]) {
        ordinato = 0;
    }
}
```

---

## 4. Tabella di Sintesi: Integrazione tra Pattern e Ruoli

| Pattern | Struttura di controllo | Ruoli delle variabili coinvolti |
| --- | --- | --- |
| **Counted Loop** | `for` | `Stepper`, `Fixed value` |
| **Sentinel Loop** | `while` | `Most-recent holder` (o `Stepper`), `Fixed value` (sentinella) |
| **Input Validation** | `do-while` | `Most-recent holder` |
| **Accumulation (Reduce)** | `for` / `while` | `Stepper`, `Gatherer` |
| **Filter and Count** | `for` + `if` | `Stepper`, `Gatherer` |
| **Extreme Selection** | `for` + `if` | `Stepper`, `Most-wanted holder` |
| **Linear Search** | `for` / `while` + `if` | `Stepper`, `One-way flag` (o `Most-wanted holder`) |
| **Adjacent Comparison** | `for` + `if` | `Stepper`, `Follower` (o indicizzazione `i - 1`) |
| **In-Place Reorder** | `for` (+ `if`) | `Organizer` (array), `Stepper`, `Temporary` |

---

## Fonti e Riferimenti Bibliografici

1. **CS-Ed UniBo – Ruoli delle variabili:** Gruppo di ricerca in Didattica dell'Informatica, Università di Bologna, *[Ruoli delle variabili](https://csed-unibo.github.io/#!pages/ruoli_variabili.md)* (basato su J. Sajaniemi, *Roles of Variables*, University of Eastern Finland).
2. **CS-Ed UniBo – Pattern dei cicli:** Gruppo di ricerca in Didattica dell'Informatica, Università di Bologna, *[Pattern dei cicli](https://csed-unibo.github.io/#!pages/pattern_cicli.md)*.
3. **Wallingford, E. – Loop Patterns:** Eugene Wallingford, *[Roundabout: Elementary Loop Patterns](https://www.cs.uni.edu/~wallingf/patterns/loops.html)*, Department of Computer Science, University of Northern Iowa.
4. **Bergin, J. et al. – Selection Patterns:** Joseph Bergin, Jutta Eckstein, Mary Lynn Manns, Eugene Wallingford, *[Patterns for Selection](https://www.cs.uni.edu/~wallingf/patterns/elementary/papers/selection.pdf)*, ChiliPLoP / Elementary Patterns Project.

