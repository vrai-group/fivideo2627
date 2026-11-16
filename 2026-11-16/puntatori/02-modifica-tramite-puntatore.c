#include <stdio.h>

int main(void) {
	int numero = 5;
	int *p = &numero;
	*p = 20;
	// numero <- 20
	printf("valore di numero:\t%d\n", numero);
	printf("indirizzo di numero:\t%p\n", (void *)&numero);
	printf("contenuto di p:\t%p\n", (void *)p);
	printf("valore puntato da p:\t%d\n", *p);

	return 0;
}
