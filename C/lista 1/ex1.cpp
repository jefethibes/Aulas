/*1 - Algoritmo do Triangulo
Fa�a um algoritmo para ler a base e a altura de um tri�ngulo. Em seguida, escreva a �rea do mesmo.  �rea = (Base * Altura) / 2 */

#include<conio.h>
#include<iostream>

using namespace std;

float base;
float altura;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite a altura do triangulo: ";
		cin >> altura;

		cout << "\nDigite a base do triangulo: ";
		cin >> base;

		area = (base * altura) / 2;

		cout << "\nA area do triangulo � " << area;

		cout << "\n\nDeseja novos valores? <S> ou <N> \n";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

