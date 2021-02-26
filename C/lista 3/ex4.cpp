/*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui.
Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida;
 veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS. */

#include<conio.h>
#include<iostream>

using namespace std;

char nome[10];
int idade;
int dias;
char op;

main () {
	do {
		system("cls");

		cout << "Qual o seu nome? \n";
		cin >> nome;

		cout << "\nQual a sua idade? \n";
		cin >> idade;

		dias = idade * 365;

		cout << "\n" << nome << " voce ja viveu " << dias << " dias!";

		cout << "\n\nDeseja verificar outra idade? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}


