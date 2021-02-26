/*28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include<conio.h>
#include<iostream>

using namespace std;

float n1;
float n2;
float media;
char op;

main () {
	do {
		system("cls");

		do {
			cout << "\nDigite a primeira nota: ";
			cin >> n1;
		} while(n1 > 10);

		do {
			cout << "\nDigite a segudna nota: ";
			cin >> n2;
		} while(n2 > 10);

		media = ((n1 * 2) + (n2 * 3)) / 5;

		cout << "\nA media e " << media;

		cout << "\n\nDeseja nova media? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
