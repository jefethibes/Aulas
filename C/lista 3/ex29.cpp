/*29. Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
sabendo-se que este sofreu um desconto de 10%. */

#include<conio.h>
#include<iostream>

using namespace std;

float produto;
float desconto;
char op;

main () {
	do {
		system("cls");

		cout << "Valor do produto: ";
		cin >> produto;

		desconto = produto - ((produto / 100) * 10);

		cout << "\nO valor do produto com desconto e: R$" << desconto;

		cout << "\n\nDeseja nova consulta de valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}


