/*34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;*/

#include<conio.h>
#include<iostream>

using namespace std;

float lado;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "Qual a medida da lateral do quadrado? \n";
		cin >> lado;

		area = lado * lado;

		cout << "\nA area do quadrado e " << area << " metros quadrados!";

		cout << "\n\nDeseja novo calculo? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
