/*4.	Fa�a um algoritmo que, dados dois vetores inteiros A e B de 10 elementos,
efetue as respectivas opera��es indicadas por um outro vetor C de 10 elementos de caracteres,
tamb�m fornecido pelo usu�rio, contendo as quatro opera��es aritm�ticas em qualquer combina��o e
armazenando os resultados em um quarto vetor D. Por exemplo, suponha que A[1] = 10, B[1] = 3 e C[1] = '*', ent�o D[1] = 30.*/

#include<conio.h>
#include<iostream>
#include<stdio.h>

using namespace std;

float A[10];
float B[10];
char C[10];
float D[10];
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite 10 valores para o vetor A: ";

		for(int i = 0; i < 10; i++) {
			cout << "\nA[" << i << "]: ";
			cin >> A[i];
		}

		cout << "\nDigite 10 valores para o vetor B: ";

		for(int i = 0; i < 10; i++) {
			cout << "\nB[" << i << "]: ";
			cin >> B[i];
		}

		cout << "\nDigite 10 opera��es aritm�ticas para o vetor C: ";

		for(int i = 0; i < 10; i++) {
			do {
				cout << "\nC[" << i << "]: ";
				cin >> C[i];
			} while((C[i] != '+')&&(C[i] != '-')&&(C[i] != '*')&&(C[i] != '/'));
		}

		cout << "\nO vetor resposta(D) �: ";

		for(int i = 0; i < 10; i++) {
			if(C[i] == '+') {
				D[i] = A[i] + B[i];
				cout << "\nD[" << i << "]: " << D[i];
			}

			if(C[i] == '-') {
				D[i] = A[i] - B[i];
				cout << "\nD[" << i << "]: " << D[i];
			}

			if(C[i] == '/') {
				D[i] = A[i] / B[i];
				cout << "\nD[" << i << "]: " << D[i];
			}

			if(C[i] == '*') {
				D[i] = A[i] * B[i];
				cout << "\nD[" << i << "]: " << D[i];
			}
		}

		cout << "\nDeseja novos valores? <S> ou <N>";
		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
