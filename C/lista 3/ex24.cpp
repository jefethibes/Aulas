/*24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer X
litros de refresco (informados pelo usuário).*/

#include<conio.h>
#include<iostream>

using namespace std;

int toneis;
int agua;
int suco;
char op;

main () {
	do {
		system("cls");

		cout << "Quantos toneis de suco serao feitos? \n";
		cin >> toneis;

		agua = toneis * 160;
		suco = toneis * 40;

		cout << "\nSerao necessarios " << agua << " litros de agua e " << suco << " litros de suco de maracuja para fazer " << toneis << " toneis de refresco!";

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
