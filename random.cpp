#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

	srand((unsigned)time(NULL));

	int aleatorio = rand() % 3;

	int aleatoriosegundo = (rand() % 5) + 1;

	printf("%d", aleatoriosegundo);

	aleatoriosegundo = (rand() % 5) + 1;
	printf("%d", aleatoriosegundo);

 
	system("pause");
}
