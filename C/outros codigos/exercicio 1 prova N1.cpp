#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int n1;
int n2;
int n3;
int opcao;
int media;
char opc;

main () {

	setlocale(LC_ALL,"portuguese");

	do {
		system("cls");
		do {
			printf("\nDigite o valor de N1: ");
			scanf("%d",&n1);
		} while(n1 > 33);

		do {
			printf("\nDigite o valor de N2: ");
			scanf("%d",&n2);
		} while(n2 > 33);

		do {
			printf("\nDigite o valor de N3: ");
			scanf("%d",&n3);
		} while(n3 > 33);

		printf("\nOpção <1> Números em ordem crescente");
		printf("\nOpção <2> Números em ordem decrescente");
		printf("\nOpção <3> Média dos três números");
		printf("\nQual opção você gostaria");
		scanf("%d",&opcao);


		if(opcao == 1) {
			if((n1 > n2)&&(n1 > n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n3,n2,n1);
			} else if((n1 < n2)&&(n1 > n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n3,n1,n2);
			} else if((n1 < n2)&&(n1 < n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n1,n3,n2);
			} else if((n1 < n2)&&(n1 < n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n1,n2,n3);
			} else if((n1 > n2)&&(n1 > n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n2,n3,n1);
			} else if((n1 > n2)&&(n1 < n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n2,n1,n3);
			}
		}


		if(opcao == 2) {
			if((n1 < n2)&&(n1 < n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n3,n2,n1);
			} else if((n1 > n2)&&(n1 > n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n1,n2,n3);
			} else if((n1 > n2)&&(n1 > n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n1,n3,n2);
			} else if((n1 > n2)&&(n1 < n3)&&(n2 < n3)) {
				printf("\n%d %d %d",n1,n2,n3);
			} else if((n1 < n2)&&(n1 > n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n2,n3,n1);
			} else if((n1 < n2)&&(n1 < n3)&&(n2 > n3)) {
				printf("\n%d %d %d",n2,n1,n3);
			}
		}

		if(opcao == 3) {
			media = (n1 + n2 + n3)/3;
			printf("\nA média é: %d",media);
		}

		printf("\nGostaria de repetir a ação: <S> ou <N>");
		opc = getche();
		opc = toupper(opc);	
	}while(opc != 'N');
}



