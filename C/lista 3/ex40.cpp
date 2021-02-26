/*40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.*/

#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

float cateto1;
float cateto2;
float hipo;
char op;

main () {
	do {
		system("cls");

		cout << "Digite o valor do primeiro cateto: ";
		cin >> cateto1;

		cout << "\nDigite o valor do segundo cateto: ";
		cin >> cateto2;

		hipo = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

		cout << "\nA hipotenuza e " << hipo;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
