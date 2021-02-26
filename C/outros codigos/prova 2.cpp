#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

char nome[30];
int cpf;
char email[30];
char endereco[30];
int notebooks,desktops;
float valor_note,valor_desk,valor_total;
float entrada_note,entrada_desk,parcelas_note,parcelas_desk;
char opc;

main(){
	setlocale(LC_ALL,"portuguese");
	
	do{
		system("cls");
		
		printf("\n-----------------------------\n");
		printf("\n           DELL              \n");
		printf("\n-----------------------------\n\n");
		
		printf("\nTabela de produtos:\n");
		printf("\nNotebook: R$ 3250,50");
		printf("\nDesktop: R$ 1535,70\n\n");
		printf("\nForma de pagamento: \n");
		printf("\nEntrada de 40 porcento mais duas parcelas iguais");
		
		printf("\nPreencha os campos abaixo sem espaço: \n");
		
		printf("\nNome: ");
		scanf("%s",&nome);
		
		printf("\nCPF: ");
		scanf("%d",&cpf);
		
		printf("\nEmail: ");
		scanf("%s",&email);
		
		printf("\nEndereço: ");
		scanf("%s",&endereco);
		
		printf("\nQuantos notebooks você gostaria: ");
		scanf("%d",&notebooks);
		
		printf("\nQuantos desktops você gostaria: ");
		scanf("%d",&desktops); 
		
		valor_note = notebooks * 3250.50;
		valor_desk = desktops * 1575.70;
		valor_total = valor_note + valor_desk;
		entrada_note = (valor_note / 100)*40;
		parcelas_note = (valor_note / 100)*30;
		entrada_desk = (valor_desk / 100)*40;
		parcelas_desk = (valor_desk / 100)*30;
		
		printf("\nA quantidade de produtos pedidos é: %d notebooks e %d desktops \n",notebooks,desktops);
		if(valor_note < valor_desk){
			printf("\nO produto mais barato foi os notebooks no valor de %.2f com uma entrada R$ %.2f e duas parcelas de R$ %.2f ",valor_note,entrada_note,parcelas_note);
		}
		else if(valor_note > valor_desk){
			printf("\nO produto mais barato foi os desktops no valor de %.2f com uma entrada R$ %.2f e duas parcelas de R$ %.2f ",valor_desk,entrada_desk,parcelas_desk);
		}
		
		if(valor_note > valor_desk){
			printf("\nO produto mais caro foi os notebooks no valor de %.2f com uma entrada R$ %.2f e duas parcelas de R$ %.2f ",valor_note,entrada_note,parcelas_note);
		}
		else if(valor_note < valor_desk){
			printf("\nO produto mais caro foi os desktops no valor de %.2f com uma entrada R$ %.2f e duas parcelas de R$ %.2f ",valor_desk,entrada_desk,parcelas_desk);
		}
		
		printf("\nO total da compra é de R$ %.2f \n\n",valor_total);
		
		printf("\nnota fiscal: \n");
		printf("\nnome: %s\n",nome);
		printf("\ncpf: %d",cpf);
		printf("\nendereço: %s",endereco);
		printf("\nemail: %s",email);
		printf("\nproduto: %d valor: %.2f",notebooks,valor_note);
		printf("\nproduto: %d valor: %.2f",desktops,valor_desk);
		printf("\nTodos os produtos serão entregues em até 10 dias úteis");
		
		printf("\n\nDeseja nova compra: <S> ou <N>");
		opc = getche();
		opc = toupper(opc);		
	}while(opc != 'N');
}
