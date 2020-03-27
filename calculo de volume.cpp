#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");

	float raio=0, altura=0, volume=0;
	printf("\ndigite o raio ");
	scanf("%f",&raio);
	printf("\ndigite a altura ");
	scanf("%f",&altura);
	volume=3.14159*(raio*raio)*altura;
	printf("\no valor do  volume é ");
	printf("%f",volume);
	
	
	getch();
}
	
