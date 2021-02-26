/*30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas,
calcule e mostre a comissão e o salário final do funcionário.*/

#include<conio.h>
#include<iostream>

using namespace std;

float salario;
float comissao;
float vendas;
float salariofinal;
char op;

main () {
	do {
		system("cls");

		cout << "Qual seu salario fixo? \n";
		cin >> salario;

		cout << "\nQuantos R$ em vendas? \n";
		cin >> vendas;

		comissao = (vendas / 100) * 4;
		salariofinal = comissao + salario;

		cout << "\nSua comissao e R$" << comissao;
		cout << "\nSeu salario e R$" << salariofinal;

		cout << "\n\nDeseja nova consulta? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
