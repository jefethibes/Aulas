/*2 - Faça um programa que imprima um elemento da seqüência de Fibonacci, dado o numero do elemento.*/

#include<conio.h>
#include<iostream>

using namespace std;

int elem;
int aux;
int fibo;
char op;

main () {
	do {
		system("cls");

		cout << "Digite um elemento da sequencia de Fibonacci: ";
		cin >> elem;
		
		aux = 1;
		fibo = 0;

		for(int i = 0; i < elem; i ++) {
			fibo = fibo + aux;
			aux = fibo - aux;
			cout << "\n" << fibo;
		}

		cout << "\n\nDeseja novo elemento? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
