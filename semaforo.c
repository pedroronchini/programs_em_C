#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void retornaStatusSemaforo(int, int *);

int main() {

	int i, id, status = -1, semafor[] = {10, 20, 30, 40, 50, 60};
	printf("\nInforme um valor para identificar o semaforo [10, 20, 30, 40, 50 , 60]: ");
	scanf("%d", &id);
	getchar();

	printf("\nValor inicial da variavel status = %d\n", status);
	for (i = 0; i < 6; i++) {
		if (id == semafor[i]) {
			retornaStatusSemaforo(id, &status);
			printf("\nValor FiNaL da variavel status = %d\n", status);
		}
	}

	return(0);
}


void retornaStatusSemaforo(int semaforo, int *st) {
	int c;
	srand(time(NULL));
	c = rand() % 3;

	printf("\nValor da cor gerada = %d\n", c);
	*st = c;

	return;
}