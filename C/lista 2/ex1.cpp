/*1-  Suponha um n�mero N qualquer
 	 	Se N � par ent�o N agora � N / 2
		Se N � �mpar N agora � 3*N + 1
	Assim para N = 3 calculamos a seguinte tabela:
		3   ' 10            4 ' 2
		10 ' 5              2 ' 1
		5   ' 16            1 ' 4
		16 ' 8              4 ' 2
		8   ' 4              2 ' 1
	Observe que a partir de sete itera��es a sequ�ncia 4 2 1 come�a a se repetir.
	Fa�a um programa que calcule para um dado N o n�mero de itera��es at� se chegar ao primeiro 1.*/

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
