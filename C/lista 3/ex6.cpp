/*6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que
leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assume que a balança já desconte o peso do prato.*/

#include<conio.h>
#include<iostream>

using namespace std;

float peso;
float valor;
char op;

main () {
	do {
		system("cls");

		cout << "Quantos quilos deu seu prato? \n";
		cin >> peso;

		valor = peso * 12;

		cout.precision(4);
		cout << "\nO valor do seu prato e: R$" << valor;
		
		cout << "\n\nDeseja nova pesagem? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
