/*3 -Faça um programa onde o usuário entra com dois números A e B o programa devolve como resultado A elevado a B.*/

#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

int a;
int b;
int resultado;
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite o primeiro numero: ";
		cin >> a;

		cout << "\nDigite o segundo numero: ";
		cin >> b;

		resultado = pow(a, b);

		cout << "\nA elevacao do primeiro numero com o segundo e: " << resultado;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
