/*1.Escreva um programa que leia 1000 n�meros aleat�rios
de 0 at� 300 e imprima o maior deles e quantas vezes o maior
n�mero foi lido, apresentando este e suas respectivas posi��es. */

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int vet[1000];
int aux;
int contador;
char op;

main() {
	do {
		system("cls");

		for(int i = 0; i < 1000; i++) {
			vet[i] = rand() % 301;
			cout << "\nVet[" << i << "]= " << vet[i];
		}

		aux = 0;

		for(int i=0; i<1000; i++) {
			if(aux < vet[i]) {
				aux = vet[i];
			}
		}

		cout <<"\n\n";

		contador=0;

		cout<<"\n O maior numero e sua posi��o �:";

		for(int i = 0; i < 1000; i++) {
			if(vet[i] >= aux) {
				cout << "\nVet[" << i << "]= " << vet[i];
				contador = contador + 1;
			}
		}

		cout << "\nE ele aparece " << contador << " vezes.";

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
