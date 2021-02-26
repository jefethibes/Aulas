/*5 - Construa um algoritmo que leia o nome, peso e a altura de um atleta e em seguida calcule se IMC -
Índice de massa Corporal (IMC = peso/altura2). Conforme informações abaixo apresente os dados do atleta
(nome, altura, peso, IMC) e a mensagem conforme a Classificação do IMC:
< 16 Magreza grave
16 a < 17 Magreza moderada
17 a < 18,5 Magreza leve
18,5 a < 25 Saudável
25 a < 30 Sobrepeso
30 a < 35 Obesidade Grau I
35 a < 40 Obesidade Grau II (severa)
? 40 Obesidade Grau III (mórbida)*/

#include<conio.h>
#include<iostream>

using namespace std;

float imc;
float peso;
float altura;
char nome[10];
char op;

main () {
	do {
		system("cls");
		
		cout << "\nNome: ";
		cin >> nome;

		cout << "\nPeso: ";
		cin >> peso;

		cout << "\nAltura: ";
		cin >> altura;

		imc = peso / (altura * altura);

		if(imc < 16) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", magreza grave";
		}

		if((imc >= 16)&&(imc < 17)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", magreza moderada";
		}

		if((imc >= 17)&&(imc < 18.5)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", magreza leve";
		}

		if((imc >= 18.5)&&(imc < 25)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", saudavel";
		}

		if((imc >= 25)&&(imc < 30)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", sobrepeso";
		}

		if((imc >= 30)&&(imc < 35)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", obesidade grau I";
		}

		if((imc >= 35)&&(imc < 40)) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", obesidade grau II(severa)";
		}

		if(imc > 40) {
			cout.precision(4);
			cout << "\nIMC= " << imc << ", obesidade grau III(morbida)";
		}

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
