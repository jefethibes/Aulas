/*1 - Algoritmo do Triangulo
Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do mesmo.  Área = (Base * Altura) / 2 */

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

		cout << "\nA area do triangulo é " << area;

		cout << "\n\nDeseja novos valores? <S> ou <N> \n";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

