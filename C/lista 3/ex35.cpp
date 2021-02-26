/*35. Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;*/

#include<conio.h>
#include<iostream>

using namespace std;

float dmaior;
float dmenor;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "Qual a diagonal menor? \n";
		cin >> dmenor;

		do {
			cout << "\nQual a diagonal maior? \n";
			cin >> dmaior;
		} while(dmaior < dmenor);

		area = (dmaior * dmenor) / 2;

		cout << "\nA area do losango e " << area << " metros quadrados!";
		
		cout << "\n\nDeseja novo calculo? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
