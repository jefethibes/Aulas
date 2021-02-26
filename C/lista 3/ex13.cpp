/*13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x DEZENA = x UNIDADE = x*/

#include<conio.h>
#include<iostream>

using namespace std;

int numero;
int dezena;
int unidade;
int centena;
char op;

main () {
	do {
		system("cls");

		do {
			cout << "Digite um numero inteiro de ate tres digitos: ";
			cin >> numero;
		} while(numero > 999);

		if(numero < 10) {
			cout << "\nUnidade: " << numero;
		}

		if((numero < 99) && (numero > 10)) {
			unidade = numero % 10;
			dezena = numero - unidade;

			cout << "\nUnidade: " << unidade;
			cout << "\nDezena: " << dezena;
		}

		if(numero > 99) {
			unidade = numero % 10;
			dezena = (numero % 100) - unidade;
			centena = numero - dezena - unidade;

			cout << "\nUnidade: " << unidade;
			cout << "\nDezena: " << dezena;
			cout << "\nCentena: " << centena;
		}

		cout << "\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
