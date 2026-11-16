# Altri esempi della prima esercitazione

Questa cartella raccoglie alcuni programmi minimali pensati per chiarire il ciclo di compilazione ed esecuzione in C, la rappresentazione interna dei dati in memoria e le caratteristiche dell'aritmetica finita del calcolatore.

---

## [`ridotto.c`](./ridotto.c)

**Obiettivo didattico:** Verificare il corretto funzionamento dell'ambiente di sviluppo e della *toolchain* di compilazione attraverso il programma C valido più piccolo possibile.

### Concetti chiave
- **Punto di ingresso (*Entry Point*):** Ogni programma eseguibile in C richiede la presenza della funzione `main`, definita qui nella forma canonica `int main(void)`.
- **Codice di terminazione (*Exit Status*):** L'istruzione `return 0;` restituisce un valore intero al sistema operativo ospitante. Per convenzione, `0` segnala una terminazione avvenuta con successo (`EXIT_SUCCESS`).
- **Assenza di librerie e direttive al preprocessore:** Poiché il programma non esegue operazioni di input/output né invoca funzioni esterne, non include file di intestazione (come `<stdio.h>`). Rappresenta la struttura sintattica minimale necessaria affinché il compilatore possa generare un binario eseguibile.

---

## [`tipi.c`](./tipi.c)

**Obiettivo didattico:** Confrontare i concetti teorici sull'architettura dei calcolatori (rappresentazione binaria delle informazioni, precisione finita, complementi) con il comportamento effettivo del compilatore C a runtime.

### Concetti ed evidenze sperimentali

1. **Dualità tra intero e carattere (Codifica ASCII):**
   - In C, il tipo `char` è a tutti gli effetti un tipo numerico intero su 8 bit (1 byte).
   - La medesima sequenza di bit in memoria può essere interpretata ed esposta all'utente in modi diversi a seconda dello specificatore di formato impiegato in `printf`:
     - Con `%d`, il valore 67 (derivato da `c1 + c2`, ossia `65 + 2`) viene stampato come valore numerico (`67`).
     - Con `%c`, lo stesso pattern di bit viene interpretato secondo la tabella ASCII, producendo il carattere corrispettivo (`'C'`). Analogamente, il valore 65 corrisponde alla lettera `'A'`.

2. **Divisione intera:**
   - Nell'istruzione `char c4 = c1 / c2;` ($65 / 2$), entrambi gli operandi sono tipi interi. Di conseguenza, l'operatore `/` applica la **divisione intera** con troncamento della parte frazionaria, producendo `32` (anziché `32.5`).

3. **Trabocco aritmetico (*Overflow*) e rappresentazione in complemento a due:**
   - L'operazione `char c5 = c1 * 3;` calcola $65 \times 3 = 195$.
   - Su architetture tipiche, il tipo `char` con segno (*signed char*) è limitato all'intervallo $[-128, +127]$.
   - Il valore 195 supera il valore massimo rappresentabile su 8 bit con segno, causando un **overflow**. In rappresentazione in complemento a due a 8 bit, la configurazione binaria risultante corrisponde a $195 - 256 = -61$, valore negativo stampato a video.

4. **Precisione finita dei numeri in virgola mobile (IEEE 754):**
   - La variabile `float f1 = 314000000000000.0F;` memorizza $3.14 \times 10^{14}$.
   - Il tipo `float` a singola precisione (32 bit) riserva 24 bit per la parte frazionaria (mantissa, compreso il bit nascosto), garantendo una precisione limitata a circa 7 cifre decimali significative.
   - Numeri reali che richiedono un numero superiore di cifre significative non possono essere codificati in modo esatto: la stampa con `%f` produce infatti `313999992291328.000000`, ossia l'approssimazione al numero floating-point più vicino.

5. **Disallineamento degli esponenti e assorbimento (*Loss of Significance*):**
   - L'operazione `float f2 = f1 + d1;` calcola la somma tra un numero molto grande ($f_1 \approx 10^{14}$) e uno molto piccolo ($d_1 \approx 10^{-5}$), distanti ben 19 ordini di grandezza.
   - Per eseguire la somma a livello hardware, gli esponenti devono essere allineati, il che comporta una traslazione a destra dei bit della mantissa dell'operando più piccolo. Poiché la mantissa a 24 bit non dispone di spazio sufficiente per ospitare tale scarto, i bit di `d1` vengono completamente scartati.
   - Il risultato `f2` coincide perciò con `f1`, mostrando l'effetto dell'**assorbimento dell'addendo minore**.

---

## [`media-3.c`](./media-3.c)

**Obiettivo didattico:** Approfondire i meccanismi di conversione implicita di tipo (*integer promotion* e *usual arithmetic conversions*) e la corretta gestione dei calcoli in virgola mobile.

### Concetti ed evidenze sperimentali

1. **Promozione intera (*Integer Promotion*):**
   - Anche se le variabili `c1`, `c2` e `c3` sono di tipo `char`, nelle espressioni del linguaggio C tutti i tipi interi di rango inferiore a `int` vengono promossi automaticamente a `int` prima di eseguire le operazioni aritmetiche.
   - La somma `c1 + c2 + c3` ($65 + 2 + 16 = 83$) viene pertanto eseguita nello spazio dei registri `int`, evitando trabocchi intermedi a livello di singolo byte.

2. **Conversioni aritmetiche consuete (*Usual Arithmetic Conversions*):**
   - Nell'espressione `(c1 + c2 + c3) / 3.0F`, il numeratore è un intero (`83`), mentre il denominatore è un letterale in virgola mobile `float` (`3.0F`).
   - Quando gli operandi di un operatore binario sono di tipo misto, il C promuove implicitamente l'operando di rango inferiore a quello di rango superiore: l'intero `83` viene convertito in `float` (`83.0F`) e la divisione viene eseguita in virgola mobile.
   - Il valore calcolato e assegnato a `media` è dunque il numero frazionario corretto (`27.666666`).

3. **Importanza del letterale in virgola mobile:**
   - Se al divisore fosse stato impiegato il letterale intero `3` anziché `3.0F`, l'operatore `/` avrebbe effettuato una divisione intera, troncando il risultato a `27`. La successiva assegnazione alla variabile `float media` avrebbe registrato il valore `27.000000`, comportando l'irrimediabile perdita della parte decimale.
