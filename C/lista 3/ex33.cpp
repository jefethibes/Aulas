/*33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor) * altura) /2;*/

#include<conio.h>
#include<iostream>

using namespace std;

float basemenor;
float basemaior;
float altura;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "Base menor: ";
		cin >> basemenor;

		do {
			cout << "\nBase maior: ";
			cin >> basemaior;
		} while(basemaior < basemenor);

		cout << "\nAltura: ";
		cin >> altura;

		area = ((basemaior + basemenor) * altura) / 2;

		cout << "\nA area do trapezio e " << area << " metros quadrados!";

		cout << "\n\nDeseja novo calculo? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

