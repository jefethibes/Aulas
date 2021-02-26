/*2 - Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do preço de fábrica)
e a percentagem do revendedor (28% do preço de fábrica). Faça um algoritmo que leia o nome do automóvel e o preço de fábrica
 e imprima o nome do automóvel e o preço final.*/

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

