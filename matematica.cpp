#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");
	
	int a=5, b=10, c=15;
	char d='x';
	
	if(a > 2){
		printf("\n %d é maior que 2", a);
	}
	
	if(c >= b){
			printf("\n %d é maior ou igual que %d", c, b);	
	}
	
	if (a< 10){
		printf("\n %d é menor que 10", a);
	}
	
	if(c != 10){
		printf("\n %d não é 10", c);
	}
	
	if(d!=a){
		printf("\n %c  nao é a", d);
	}
	
	
	getch();
}
