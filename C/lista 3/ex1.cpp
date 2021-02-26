/*1. A imobiliária Imóbilis vende apenas terrenos retangulares.
 Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.*/

#include<conio.h>
#include<iostream>

using namespace std;

float frente;
float lado;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "\nQuanto metros de frente tem o terreno? \n";
		cin >> frente;

		cout << "\nQuantos metros tem a lateral do terreno? \n";
		cin >> lado;

		area = lado * frente;

		cout << "\nA area do terreno e: " << area << " metros quadrados";

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
