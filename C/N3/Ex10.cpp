/*10.  Leia 3 vetores de 9 posições e crie outro com o 1º terço do primeiro,
o segundo 3º do segundo e o ultimo terço do 3º. Escrever o vetor resultante ao final.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

float A[9];
float B[9];
float C[9];
float X[9];
char op;

main () {
	do {
		system("cls");

		cout << "\nDigite 9 valores para o vetor A: ";

		for(int i = 0; i < 9; i++) {
			cout << "\nA[" << i << "]: ";
			cin >> A[i];
		}

		cout << "\nDigite 9 valores para o vetor B: ";

		for(int i = 0; i < 9; i++) {
			cout << "\nB[" << i << "]: ";
			cin >> B[i];
		}

		cout << "\nDigite 9 valores para o vetor C: ";

		for(int i = 0; i < 9; i++) {
			cout << "\nC[" << i << "]: ";
			cin >> C[i];
		}

		cout << "\nO vetor resposta é: ";

		for(int i = 0; i < 3; i++) {
			X[i] = A[i];
			cout << "\nX[" << i << "]: " << X[i];
		}

		for(int i = 3; i < 6; i++) {
			X[i] = B[i];
			cout << "\nX[" << i << "]: " << X[i];
		}

		for(int i = 6; i < 9; i++) {
			X[i] = C[i];
			cout << "\nX[" << i << "]: " << X[i];
		}

		cout << "\nDeseja novos valores? <S> ou <N>";
		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
