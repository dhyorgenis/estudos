#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	printf("programa\n");


	float eleitores=0, votobranco=0, votonulo=0, votovalido=0, pvalido=0, pnulo=0, pbranco=0;
	printf("digite o numero de eleitores\n");
	scanf("%f",&eleitores);
	printf("digite o numero de votos brancos\n");
	scanf("%f",&votobranco);
	printf("digite o numero de votos validos\n");
	scanf("%f",&votovalido);
	printf("digite o numero de votos nulos\n");
	scanf("%f",&votonulo);
	
	pvalido=(votovalido*100)/eleitores;
	pnulo=(votonulo*100)/eleitores;
	pbranco=(votobranco*100)/eleitores;
	
	printf("\na porcentagem de votos brancos é ");
	printf("%.0f %",pbranco);
	printf("\na porcentagem de votos nulos é ");
	printf("%.0f %",pnulo);
	printf("\na porcentagem de votos valido é ");
	printf("%.0f %",pvalido);
	
	
	
	
	getch();
}
	
