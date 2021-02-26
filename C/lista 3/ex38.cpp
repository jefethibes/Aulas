/*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/

#include<conio.h>
#include<iostream>

using namespace std;

int anonasc;
int anoatual;
int anos;
int meses;
int dias;
int semanas;
char op;

main () {
	do {
		system("cls");

		cout << "Em que ano voce nasceu? \n";
		cin >> anonasc;

		do {
			cout << "\nEm que ano estamos? \n";
			cin >> anoatual;
		} while(anonasc > anoatual);

		anos = anoatual - anonasc;
		meses = anos * 12;
		dias = anos * 364;
		semanas = meses * 4;

		cout << "\nSua idade em: ";
		cout << "\nAnos: " << anos;
		cout << "\nMeses: " << meses;
		cout << "\nDias: " << dias;
		cout << "\nSemanas: " << semanas;

		cout << "\n\nDeseja nova data? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

