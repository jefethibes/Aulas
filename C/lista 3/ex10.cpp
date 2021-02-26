/*10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y). */

#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

float yum;
float ydois;
float xum;
float xdois;
float resultado;
char op;

main () {
	do {
		system("cls");

		cout << "Digite duas coordenadas para Y: \n";
		cin >> yum;
		cin >> ydois;

		cout << "\nDigite duas coordenadas para X: \n";
		cin >> xum;
		cin >> xdois;

		resultado = sqrt(pow(yum - ydois, 2) + pow(xum - xdois, 2));
		
		cout << "\nO resultado e: " << resultado;

		cout << "\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
