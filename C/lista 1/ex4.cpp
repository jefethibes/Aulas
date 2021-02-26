/*4 - Algoritmo 3 Menores
Faça um algoritmo que leia 3 números inteiros e imprima o menor deles.*/

#include<iostream>
#include<conio.h>

using namespace std;

int menor;
int valor;
char op;

main () {
	do {
		system("cls");

		cout << "Digite tres valores inteiros: \n";

		menor = 99999;

		for(int i = 0; i < 3; i++) {
			cin >> valor;

			if(valor < menor) {
				menor = valor;
			}
		}

		cout << "\nO menor valor inteiro e: " << menor;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

