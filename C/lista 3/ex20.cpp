/*20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos.
Fa�a um algoritmo para calcular quantos novelos de l� ela gasta por blusa.*/

#include<conio.h>
#include<iostream>

using namespace std;

int blusas;
float novelos;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "\nQuantos novelos sao necessario por blusa? \n";
		cin >> novelos;

		cout << "\nQuantas blusas serao fabricadas? \n";
		cin >> blusas;

		total = blusas * novelos;

		cout << "\nSerao necessarios " << total << " novelos de la para a confeccao!";

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
