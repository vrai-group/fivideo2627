#include <stdio.h>

/* --- PROTOTIPI DELLE FUNZIONI --- */

float radq(float x);
float radq_iter(float x, float stima);
int accurata(float stima, float x);
float migliora(float stima, float x);
float quadrato(float x);
float valore_assoluto(float x);
float media(float a, float b);

int main(void) {
    printf("radq(2) = %f\n", radq(2.0f));
    printf("radq(4) = %f\n", radq(4.0f));
    printf("radq(1000000) = %f\n", radq(1000000.0f));

    return 0;
}

/**
 * @brief Calcola la radice quadrata di un numero usando il metodo di Erone.
 * 
 * Contratto: radq : float -> float
 * Scopo: Calcolare la radice quadrata approssimata di x partendo da una stima iniziale pari a 1.0.
 * 
 * Esempi:
 *   radq(4.0f)   -> ~2.000000
 *   radq(2.0f)   -> ~1.414216
 * 
 * @param x Il numero di cui calcolare la radice quadrata (deve essere >= 0).
 * @return La radice quadrata approssimata di x.
 */
float radq(float x) {
    return radq_iter(x, 1.0f);
}

/**
 * @brief Funzione ausiliaria ricorsiva per calcolare la radice quadrata.
 * 
 * Contratto: radq_iter : (float, float) -> float
 * Scopo: Valutare se la stima attuale è sufficientemente accurata; se non lo è,
 *        ricorre migliorando la stima.
 * 
 * Esempi:
 *   radq_iter(4.0f, 1.0f) -> 2.000000
 *   radq_iter(9.0f, 3.0f) -> 3.000000
 * 
 * @param x Il numero di cui calcolare la radice quadrata.
 * @param stima La stima corrente della radice.
 * @return La stima raffinata della radice quadrata.
 */
float radq_iter(float x, float stima) {
    return accurata(stima, x) ?
                        stima :
                        radq_iter(x, migliora(stima, x));
}

/**
 * @brief Verifica se la stima corrente è sufficientemente vicina al valore reale.
 * 
 * Contratto: accurata : (float, float) -> {0/1}
 * Scopo: Determinare se l'errore assoluto tra il quadrato della stima e il valore target x
 *        è inferiore alla tolleranza prefissata (1e-6).
 * 
 * Esempi:
 *   accurata(2.0f, 4.0f)   -> true  (abs(4.0 - 4.0) < 0.000001)
 *   accurata(1.0f, 4.0f)   -> false (abs(1.0 - 4.0) >= 0.000001)
 * 
 * @param stima La stima attuale della radice.
 * @param x Il valore target.
 * @return 1 se la stima è accettabile, 0 altrimenti.
 */
int accurata(float stima, float x) {
    return valore_assoluto(quadrato(stima) - x) < 1e-6f;
}

/**
 * @brief Calcola il valore assoluto di un numero in virgola mobile.
 * 
 * Contratto: valore_assoluto : float -> float
 * Scopo: Restituire la distanza di x da zero (rendendolo non negativo).
 * 
 * Esempi:
 *   valore_assoluto(-3.5f) -> 3.500000
 *   valore_assoluto(2.1f)  -> 2.100000
 * 
 * @param x Il valore reale di ingresso.
 * @return x se x >= 0, altrimenti -x.
 */
float valore_assoluto(float x) {
    return (x >= 0.0f) ? x : -x;
}

/**
 * @brief Calcola il quadrato di un numero.
 * 
 * Contratto: quadrato : float -> float
 * Scopo: Restituire il prodotto di x per se stesso.
 * 
 * Esempi:
 *   quadrato(3.0f) -> 9.000000
 *   quadrato(-2.0f) -> 4.000000
 * 
 * @param x Il numero da elevare al quadrato.
 * @return x * x.
 */
float quadrato(float x) {
    return x * x;
}

/**
 * @brief Genera una stima migliore della radice quadrata di x.
 * 
 * Contratto: migliora : (float, float) -> float
 * Scopo: Applicare l'algoritmo di Erone calcolando la media tra la stima corrente e x / stima.
 * 
 * Esempi:
 *   migliora(1.0f, 2.0f) -> 1.500000  (media di 1.0 e 2.0/1.0)
 *   migliora(1.5f, 2.0f) -> 1.416667  (media di 1.5 e 2.0/1.5)
 * 
 * @param stima La stima attuale.
 * @param x Il valore di cui si cerca la radice.
 * @return La nuova stima calcolata.
 */
float migliora(float stima, float x) {
    return media(stima, x / stima);
}

/**
 * @brief Calcola la media aritmetica di due numeri float.
 * 
 * Contratto: media : (float, float) -> float
 * Scopo: Restituire il punto medio tra a e b.
 * 
 * Esempi:
 *   media(2.0f, 4.0f) -> 3.000000
 *   media(1.0f, 2.0f) -> 1.500000
 * 
 * @param a Primo valore float.
 * @param b Secondo valore float.
 * @return (a + b) / 2.0f.
 */
float media(float a, float b) {
    return (a + b) / 2.0f;
}
