/*12. Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em 15%.
Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.*/

#include<conio.h>
#include<iostream>

using namespace std;

float salario;
float almento;
float imposto;
char op;

main () {
	do {
		system("cls");

		cout << "Qual seu salario? \n";
		cin >> salario;

		almento = (salario / 100) * 15 + salario;
		imposto = almento - ((almento / 100) * 8);

		cout << "\nSeu salario inicial e: R$" << salario;

		cout << "\nSeu salario com almento e: R$" << almento;

		cout << "\nSeu salario final descontado o imposto e: R$" <<imposto;

		cout << "\n\nDeseja nova consulta? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
