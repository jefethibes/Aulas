/*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um determinado funcion�rio.
Considere que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos.*/

#include<conio.h>
#include<iostream>

using namespace std;

int hrn;
int hre;
float salariob;
float salariol;
char op;

main () {
	do {
		system("cls");

		cout << "Quantas horas normais voce faz em um mes? \n";
		cin >> hrn;

		cout << "\nQuantas horas extras voce fez esse mes? \n";
		cin >> hre;

		salariob = (hrn * 10) + (hre * 15);
		salariol = salariob - ((salariob / 100) * 10);

		cout << "\nSeu salario bruto e: R$" << salariob;
		cout << "\nSeu salario liquido e: R$" << salariol;

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
