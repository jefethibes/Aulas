/*6.	Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer
correspondentes a duas posi��es no vetor. Ao final seu programa dever� escrever a soma dos
valores encontrados nas respectivas posi��es X e Y.*/

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

		cout << "\nDigite a posi��o X: ";
		cin >> X;

		cout << "\nDigite a posi��o Y: ";
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

		cout << "\nA soma da posi��o Vet[" << X << "] + Vet[" << Y << "] = " << soma;

		cout << "\nDeseja novos valores? <S> ou <N>";
		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
