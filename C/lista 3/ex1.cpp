/*1. A imobili�ria Im�bilis vende apenas terrenos retangulares.
 Fa�a um algoritmo para ler as dimens�es de um terreno e depois exibir a �rea do terreno.*/

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
