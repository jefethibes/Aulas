/*7. Leia um vetor de 16 posições e troque os 8 primeiros valores
pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int vet[16];
int vetaux[16];
char op;

main() {

	do {

		system("cls");

		cout<<"\n Digite 16 valores para um vetor \n";

		for(int i=0; i<16; i++) {
			cout<<"Vetor["<<i<<"]:";
			cin>>vet[i];
		}

		for(int i=8; i<16; i++) {
			vetaux[i-8]=vet[i];
		}

		for(int i=0; i<8; i++) {
			vetaux[i+8]=vet[i];
		}

		cout<<"\n O novo Vetor e:";

		for(int i=0; i<16; i++) {
			cout<<"\n Vetor["<<i<<"]:"<<vetaux[i];
		}

		cout<<"\n Deseja novos valores <S> novos <N> Sair:";
		op=getche();
		op=toupper(op);

	} while(op != 'N');
}
