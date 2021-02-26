/*36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário,
calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.*/

#include<conio.h>
#include<iostream>

using namespace std;

float sminimo;
float salario;
float qtd;
char op;

main () {
	do {
		system("cls");

		cout << "Qual o valor do salario minimo? \n";
		cin >> sminimo;

		cout << "\nQual seu salario? \n";
		cin >> salario;

		qtd = salario / sminimo;

		cout << "\nVoce recebe " << qtd << " salario(s) minimo(s)!";

		cout << "\n\nDeseja nova consulta? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
