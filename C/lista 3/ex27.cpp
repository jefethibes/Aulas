/*27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.*/

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
