/*4 - Escreva um programa que solicite ao usuário três números inteiros a, b, c onde a é maior que um (1).
Seu programa deve somar todos os inteiros entre b e c diviseis por a.*/

#include<iostream>
#include<conio.h>

using namespace std;

int a;
int b;
int c;
int aux;
char op;

main () {
	do {
		system("cls");

		do {
			cout << "Digite um numero para A maior que 1: ";
			cin >> a;
		} while(a <= 1);

		cout << "\nDigite um numero para B: ";
		cin >> b;

		do {
			cout << "\nDigite um numero diferente de B para C: ";
			cin >> c;
		} while(b == c);

		aux = 0;

		if(b < c) {
			b = b + 1;

			for(b; b < c; b++) {
				if(b % a == 0) {
					cout << "\n" << b;
					aux = aux + b;
				}
			}

			cout << "\nA soma dos divisores de A entre B e C e: " << aux;
		}

		if(b > c) {
			b = b - 1;

			for(b; b > c; b--) {
				if(b % a == 0) {
					cout << "\n" << b;
					aux = aux + b;
				}
			}

			cout << "\nA soma dos divisores de A entre B e C e: " << aux;
		}
		
		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
