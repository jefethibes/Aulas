/*27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/

#include<conio.h>
#include<iostream>

using namespace std;

float n1;
float n2;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Digite um numero: ";
		cin >> n1;

		do {
			cout << "Digite outro numero, so que maior que 0: ";
			cin >> n2;
		} while(n2 == 0);

		total = n1 / n2;

		cout << "\nO primeiro numero dividido pelo primeiro e " << total;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
