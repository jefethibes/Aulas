/*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

#include<conio.h>
#include<iostream>

using namespace std;

float peso;
float gramas;
char op;

main () {
	do {
		system("cls");

		cout << "Qual seu peso? \n";
		cin >> peso;

		gramas = peso * 1000;

		cout << "\nSeu peso em gramas e " << gramas;

		cout << "\n\nDeseja nova convercao? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
