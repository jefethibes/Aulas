/*22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar.
Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de um tipo,
a quantidade respectiva é zero.*/

#include<conio.h>
#include<iostream>

using namespace std;

float umcen;
float cinco;
float dez;
float vintecinco;
float cincoenta;
float um;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Digite a quantidade de moedas abaixo: \n";
		cout << "\nUm centavo: ";
		cin >> umcen;

		cout << "\nCinco centavos:";
		cin >> cinco;

		cout << "\nDez centavos: ";
		cin >> dez;

		cout << "\nVinte e cinco centavos: ";
		cin >> vintecinco;

		cout << "\nCincoenta centavos: ";
		cin >> cincoenta;

		cout << "\nUm real: ";
		cin >> um;

		total = (umcen * 0.1) + (cinco * 0.5) + (dez * 0.10) + (vintecinco * 0.25) + (cincoenta * 0.50) + um;

		cout << "\nO valor somado das moedar e: R$" << total;

		cout << "\n\nDeseja nova soma? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
