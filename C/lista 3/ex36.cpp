/*36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio,
calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.*/

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
