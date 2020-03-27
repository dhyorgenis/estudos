#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");

	int cont;
	
	for(cont=1; cont <=10; cont++){
		printf("\n 5 X %d = %d",cont, 5*cont);
	}



getch();	
}
