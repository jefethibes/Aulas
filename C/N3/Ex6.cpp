/*6.	Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer
correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos
valores encontrados nas respectivas posições X e Y.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

float Vet[12];
char op;
int X,Y;
float aux1,aux2;
float soma;

main () {
	do {
		system("cls");

		cout << "\nDigite 12 valores para um vetor: ";

		for(int i = 0; i < 12; i++) {
			cout << "\nVet[" << i << "]: ";
			cin >> Vet[i];
		}

		cout << "\nDigite a posição X: ";
		cin >> X;

		cout << "\nDigite a posição Y: ";
		cin >> Y;

		for(int i = 0; i < 12; i++) {
			if(Vet[i] == X) {
				aux1 = Vet[i];
			}

			if(Vet[i] == Y) {
				aux2 = Vet[i];
			}
		}

		soma = aux1 + aux2;

		cout << "\nA soma da posição Vet[" << X << "] + Vet[" << Y << "] = " << soma;

		cout << "\nDeseja novos valores? <S> ou <N>";
		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
