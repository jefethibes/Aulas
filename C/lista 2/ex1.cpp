/*1-  Suponha um número N qualquer
 	 	Se N é par então N agora é N / 2
		Se N é ímpar N agora é 3*N + 1
	Assim para N = 3 calculamos a seguinte tabela:
		3   ' 10            4 ' 2
		10 ' 5              2 ' 1
		5   ' 16            1 ' 4
		16 ' 8              4 ' 2
		8   ' 4              2 ' 1
	Observe que a partir de sete iterações a sequência 4 2 1 começa a se repetir.
	Faça um programa que calcule para um dado N o número de iterações até se chegar ao primeiro 1.*/

#include<iostream>
#include<conio.h>

using namespace std;

int n;
char op;

main () {
	do {
		system("cls");

		cout << "Digite um numero: ";
		cin >> n;

		for(int i = n; i > 1; i--) {
			if(n % 2 == 0) {
				n = n / 2;
				i = n;
				cout << "\n" << n;
			}
			if(n % 2 != 0) {
				n = n * 3 + 1;
				i = n;
				cout << "\n" << n;
			}
		}
		
		cout << "\n" << 1;

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
