/*5 - Algoritmo PA - Progress�o Aritm�tica
Fa�a um programa  que  imprima  os elementos  de  uma PA  e o somat�rio da  mesma dados :
primeiro termo , numero de termos e raz�o.*/

#include<iostream>
#include<conio.h>

using namespace std;

int primeirotermo;
int ntermos;
int razao;
char op;

main () {
	do {
		system("cls");

		cout << "Digite a razao: ";
		cin >> razao;

		cout << "Digite o primeiro termo: ";
		cin >> primeirotermo;

		cout << "Digite o numero de termos: ";
		cin >> ntermos;

		for(int i = 0; i < ntermos; i++) {
			cout << "\n" << primeirotermo;
			primeirotermo = primeirotermo + razao;
		}

		cout << "\n\nDeseja nova PA? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

