/*3.	Através do Circuito abaixo:

Construa um programa que gere a tabela verdade e apresente na tela os seus dados intermediários e o valor final Y referente
as entradas padrões combinatórios de A, B e C. O programa deve oferecer também ao usuário a possibilidade de gerar randomicamente
as entradas e produzir a tabela com suas respectivas saídas aleatórias.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

char op;
char y[3][3]= {"A","B","C"};
int x[3];
int cont,contb;

main () {
	system("cls");

	cout << "\nDeseja autopreenchimento da tabela? <S> ou <N>";
	op = getche();
	op = toupper(op);

	if(op == 'S') {
		for(int i = 0; i < 3; i++) {
			x[i] = rand() % 2;
			cout << "\n" << y[i] << "= " << x[i];
		}
	}

	if(op == 'N') {
		for(int i = 0; i < 3; i++) {
			do {
				cout << "\n" << y[i] << ": ";
				cin >> x[i];
			} while((x[i] != 0)&&(x[i] != 1));
		}
	}
	
	cout << "\n\nNA	NA.B	A.C		NA.B+A.C\n";
	
	cont = 0;
	
	if(x[0] == 0) {
		cout << "\nNA= 1";
			if(x[1] == 1) {
				cout << "\nNA.B= 1";
				cont = cont + 1;
			}
			
			if(x[1] == 0) {
				cout << "\nNA.B= 0";
			}
	}
	
	if(x[0] == 1) {
		cout << "\nNA= 0";
			if(x[1] == 1) {
				cout << "\nNA.B= 0";
			}
			
			if(x[1] == 0) {
				cout << "\nNA.B= 0";
			}
	}
	
	contb = 0;
	
	if((x[0] == 0)&&(x[2] == 0)) {
		cout << "\nA.C= 0";
	}
	
	if((x[0] == 1)&&(x[2] == 0)) {
		cout << "\nA.C= 0";
	}
	
	if((x[0] == 0)&&(x[2] == 1)) {
		cout << "\nA.C= 0";
	}
	
	if((x[0] == 1)&&(x[2] == 1)) {
		cout << "\nA.C= 1";
	}
	
	if((cont == 0)&&(contb == 0)) {
		cout << "\nNA.B+A.C= 0";
		cout << "\nY= 0";
	}
		else{
			cout << "\nNA.B+A.C= 1";
			cout << "\nY= 1";
		}
}

