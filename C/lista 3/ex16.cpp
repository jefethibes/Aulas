/*16. A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo,
uma fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
e que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer,
e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra.*/

#include<conio.h>
#include<iostream>

using namespace std;

int qtd;
float queijohamb;
float presunto;
char op;

main () {
	do {
		system("cls");

		cout << "Quantos sanduiches gostaria de fazer? \n";
		cin >> qtd;

		queijohamb = (qtd * 100) / 1000;
		presunto = (qtd * 50) / 1000;

		cout << "\nPara fazer " << qtd << " sanduiches serao necessarios: ";
		cout << "\nHamburguer: " << queijohamb << "Kg";
		cout << "\nQueijo: " << queijohamb << "Kg";
		cout << "\nPresunto: " << presunto << "Kg";

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
