/*11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias.
Faça um algoritmo para converter este tempo em anos, meses e dias. Assume que cada mês possui sempre 30 dias.*/

#include<conio.h>
#include<iostream>

using namespace std;

int dias;
int anos;
int meses;
char op;

main () {
	do {
		system("cls");

		cout << "Quantos dias estao sem acidente? \n";
		cin >> dias;

		if(dias > 360) {
			meses = dias / 30;
			anos = meses / 12;
			dias = dias % 30;
			meses = meses % 12;

			if(meses > 0) {
				cout << "\nEstamos a " << anos << " ano(s) e " << meses << " mese(s) e " << dias << " dia(s) sem acidente!";
			}

			if(meses == 0) {
				cout << "\nEstamos a " << anos << " ano(s) e " << dias << " dia(s) sem acidente!";
			}
		}
		
		if(dias < 30){
			cout << "\nEstamos a " << dias << " dia(s) sem acidente!";
		}

		if((dias > 30) && (dias < 360)) {
			meses = dias / 30;
			dias = dias % 30;

			cout << "\nEstamos a " << meses << " mese(s) e " << dias << " dia(s) sem acidente!";
		}

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
