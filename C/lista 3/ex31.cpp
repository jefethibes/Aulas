/*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/

#include<conio.h>
#include<iostream>

using namespace std;

float peso;
float engordar;
float emagrecer;
char op;

main () {
	do {
		system("cls");

		cout << "Digite seu peso: ";
		cin >> peso;

		engordar = peso + ((peso / 100) * 15);
		emagrecer = peso - ((peso / 100) * 20);

		cout << "\nSe engordar: " << engordar << " Kg";
		cout << "\nSe emagrecer: " << emagrecer << " Kg";

		cout << "\n\nDeseja nova consulta? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

