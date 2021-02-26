/*37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.*/

#include<conio.h>
#include<iostream>

using namespace std;

int numero;
int aux;
char op;

main () {
	do {
		system("cls");

		cout << "Degite um numero para tabuada: ";
		cin >> numero;

		for(int i = 0; i < 11; i++) {
			aux = numero * i;

			cout << "\n" << numero << " x " << i << "= " << aux;
		}

		cout << "\n\nDeseja nova tabuada? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
