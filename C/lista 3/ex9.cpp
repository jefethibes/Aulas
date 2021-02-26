/*9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente
por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas,
médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.*/

#include<conio.h>
#include<iostream>

using namespace std;

int p;
int m;
int g;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Quantas camisetas P? \n";
		cin >> p;

		cout << "\nQuantas camisetas M? \n";
		cin >> m;

		cout << "\nQuantas camisetas G? \n";
		cin >> g;

		total = (p * 10) + (m * 12) + (g * 15);

		cout << "\nO valor arecadado e: R$" << total;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
