/*8. Faça um algoritmo para ler três notas de um aluno em uma
disciplina e imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).*/

#include<conio.h>
#include<iostream>

using namespace std;

float n1;
float n2;
float n3;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite suas notas: ";
		
		cout << "\nN1= ";
		cin	>> n1;
		
		cout << "\nN2= ";
		cin >> n2;
		
		cout << "\nN3= ";
		cin >> n3;
		
		total = (n1 + (n2 * 2) + (n3 * 3)) / 6;
		
		cout.precision(2);
		cout << "\nSua media e: " << total;

		cout << "\n\nDeseja nova media? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
