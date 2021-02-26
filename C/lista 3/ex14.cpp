/*14. Calcule a área de uma pizza que possui um raio R (pi=3.14).*/

#include<conio.h>
#include<iostream>

using namespace std;

float raio;
float area;
char op;

main () {
	do {
		system("cls");

		cout << "Digite o raio da pizza: ";
		cin >> raio;

		area = (2 * raio) * 3.14;
		
		cout << "\nA area da pizza e: " << area;

		cout << "\n\nDeseja nova area? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
