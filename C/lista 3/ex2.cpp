/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.*/

#include<conio.h>
#include<iostream>

using namespace std;

int cavalos;
int qnt;
char op;

main () {
	do {
		system("cls");

		cout << "\nQuantos cavalos o aras comprou? \n";
		cin >> cavalos;

		qnt = cavalos * 4;

		cout << "\nSao necessarias " << qnt << " ferraduras para equipar todos os cavalos comprados";
		
		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
