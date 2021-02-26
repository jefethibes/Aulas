/*26. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números.*/

#include<conio.h>
#include<iostream>

using namespace std;

float n1;
float n2;
float n3;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Digite um numero: ";
		cin >> n1;

		cout << "\nDigite outro numero: ";
		cin >> n2;

		cout << "\nDigite outro numero: ";
		cin >> n3;

		total = n1 * n2 * n3;

		cout << "\nA multiplicacao dos tres numeros e " << total;
		
		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
