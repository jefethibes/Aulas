#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float precodevido;
char nome[30];
char codproduto[4];
int quantidade;
char opc;

main () {
	setlocale(LC_ALL,"portuguese");

	do {
		system("cls");

		printf("\nDigite o nome do cliente: ");
		scanf("%s",&nome);

		do {
			printf("\n------------------------------");
			printf("\n     Código dos produtos      ");
			printf("\n------------------------------\n\n");

			printf("\nABCD - Lapis - R$ 5.30");
			printf("\nXYPK - Lapiseira - R$ 6.00");
			printf("\nKLMP - Borracha - R$ 3.20");
			printf("\nQRST - Post-it - R$ 2.50\n\n");

			printf("\nDigite o codigo do produto: ");
			scanf("%s",&codproduto);
		} while((strcmp("ABCD",codproduto) != 0) && (strcmp("XYPK",codproduto) != 0) && (strcmp("KLMP",codproduto) != 0) && (strcmp("QRST",codproduto) != 0));

		printf("\nDigite a quantidade do produto: ");
		scanf("%d",&quantidade);

		if(strcmp("ABCD",codproduto) == 0) {
			precodevido = quantidade * 5.30;
			printf("\n\nTotal devido na compra: %.2f de %d Lapis",precodevido,quantidade);
		}

		if(strcmp("XYPK",codproduto) == 0) {
			precodevido = quantidade * 6.00;
			printf("\n\nTotal devido na compra: %.2f de %d Lapiseiras",precodevido,quantidade);
		}

		if(strcmp("KLMP",codproduto) == 0) {
			precodevido = quantidade * 3.20;
			printf("\n\nTotal devido na compra: %.2f de %d Borracha",precodevido,quantidade);
		}

		if(strcmp("QRST",codproduto) == 0) {
			precodevido = quantidade * 2.50;
			printf("\n\nTotal devido na compra: %.2f de %d Post-it",precodevido,quantidade);
		}

		printf("\n\nDeseja nova compra: <S> ou <N>");
		opc = getche();
		opc = toupper(opc);
	} while(opc != 'N');
}
