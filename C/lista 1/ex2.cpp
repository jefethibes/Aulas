/*2 - Algoritmo Pre�o de Autom�vel
O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos impostos (45% do pre�o de f�brica)
e a percentagem do revendedor (28% do pre�o de f�brica). Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica
 e imprima o nome do autom�vel e o pre�o final.*/

#include<conio.h>
#include<iostream>

using namespace std;

float precofabrica;
float impostofabrica;
float impostovendedor;
float precofinal;
char modelo[10];
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite o modelo do automovel: ";
		cin >> modelo;

		cout << "\nQual o valor de fabrica: ";
		cin >> precofabrica;

		impostofabrica = (precofabrica / 100) * 45;
		impostovendedor = (precofabrica / 100) * 28;
		precofinal = precofabrica + impostofabrica + impostovendedor;

		cout << "\nO modelo " << modelo << "tem o valor final de: R$ " << precofinal;

		cout << "\n\nDeseja novo modelo? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

