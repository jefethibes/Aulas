/*21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato,
faça um algoritmo para calcular quantos litros de refrigerante ele comprou.*/

#include<conio.h>
#include<iostream>

using namespace std;

float lata;
float garrafinha;
float garrafa;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Quantas latas? \n";
		cin >> lata;

		cout << "\nQuantas garrafas 600ml? \n";
		cin >> garrafinha;

		cout << "\nQuantas garrafas 2l? \n";
		cin >> garrafa;

		total = ((garrafa * 2000) + (garrafinha * 600) + (lata * 350)) / 1000;

		cout << "\nNo total foram comprados " << total << " litros de refrigerante!";

		cout << "\n\nDeseja nova compra? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
