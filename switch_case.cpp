#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");
	
	int a=1;
	char b='x';
	
	if(a==1){
		printf("\n op��o escolhida : 1");
		}else if(a==2){
			printf("\n op��o escolhida : 2");
		}else if(a==3){
			printf("\n op��o escolhida : 3");
		}else{
			printf("\n op��o invalida");
		}
		
		switch(a){
			case 1:
				printf("\n op��o escolhida : 1");
				break;
			case 2:
				printf("\n op��o escolhida : 2");
				break;
			case 3:
				printf("\n op��o escolhida : 3");
				break;
			default:
				printf("\n op��o invalida");
				break;
		}
	
	
	
	
	getch();		
	}
	
	
	
	

	


