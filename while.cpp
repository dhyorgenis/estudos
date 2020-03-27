#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");

	int a=1, b=10;

	while(a <=10){
		printf("\n%d",a);
		a++;
	}
	
		while(b >=1){
		printf("\n%d",b);
		b--;
	}

getch();	
}
