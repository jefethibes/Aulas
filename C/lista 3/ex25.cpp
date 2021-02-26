/*25. Calcule o volume de uma caixa d'água cilíndrica.*/

#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

float raio;
float altura;
float volume;
char op;

main () {
	do {
		system("cls");

		cout << "Qual o raio? \n";
		cin >> raio;

		cout << "\nQual a altura? \n";
		cin >> altura;

		volume = 3.14 * pow(raio, 2) * altura;

		cout << "\nO volume da caixa e " << volume << " metros cubicos!";

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
