#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int p,g,m;
char cor[30];
float valor;
char opc;


main (){
	setlocale(LC_ALL,"portuguese");
	
	do{
	
	system("cls");
	
	printf("\nQauntas camisas grandes: ");
 	scanf("%d",&g);
	
	printf("\nQauntas camisas médias: ");
 	scanf("%d",&m);
 	
 	printf("\nQauntas camisas pequenas: ");
 	scanf("%d",&p);	
 	
 	do{
	printf("\nTabela:");
 	printf("\nVermelho: R$ 1");
 	printf("\nAzul: R$ 0.45");
 	printf("\nVerde: R$ 0.30");
 	printf("\nBranca: R$ 0");
 	printf("\nQual a cor dar camisas desejadas");
 	scanf("%s",&cor);
	}while((strcmp("vermelho",cor) != 0) && (strcmp("azul",cor) != 0) && (strcmp("verde",cor) != 0) && (strcmp("branca",cor) != 0));
	
	if(strcmp("vermelho",cor) == 0){
		valor = ((p * 25.40)+(m * 35.50)+(g * 45.99))+(p+m+g)*1;
		printf("\ntotal: %.2f",valor);
	}
	
	if(strcmp("azul",cor) == 0){
		valor = ((p * 25.40)+(m * 35.50)+(g * 45.99))+(p+m+g)*0.45;
		printf("\ntotal: %.2f",valor);
	}
	
	if(strcmp("verde",cor) == 0){
		valor = ((p * 25.40)+(m * 35.50)+(g * 45.99))+(p+m+g)*0.30;
		printf("\ntotal: %.2f",valor);
	}
	
	if(strcmp("braca",cor) == 0){
		valor = ((p * 25.40)+(m * 35.50)+(g * 45.99));
		printf("\ntotal: %.2f",valor);
	}
	printf("\n\nDeseja nova compra: <S> ou <N>");
	opc = getche();
	opc = toupper(opc);
	}while(opc != 'N');
}
