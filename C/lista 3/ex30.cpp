/*30. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas.
Fa�a um algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas,
calcule e mostre a comiss�o e o sal�rio final do funcion�rio.*/

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
