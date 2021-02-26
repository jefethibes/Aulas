/*17. Alguns países medem temperaturas em graus Celsius,
e outros em graus Fahrenheit. Faça um algoritmo para ler uma temperatura Celsius e
imprimi-la em Fahrenheit (pesquise como fazer este tipo de conversão).*/

#include<conio.h>
#include<iostream>

using namespace std;

float c;
float f;
char op;

main () {
	do {
		system("cls");

		cout << "Digite uma temperatura em graus Celsius: ";
		cin >> c;

		f = (c / 5) * 9 + 32;

		cout << "\nEsse valor em graus Fahrenheit e: " << f;

		cout << "\n\nDeseja nova conversao? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
