/*23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura,
faça um algoritmo para ler os dados necessários e calcular a altura do prédio. */

#include<conio.h>
#include<iostream>

using namespace std;

float altura;
float sombrapredio;
float sombrapessoa;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Qual a medida da sombra do predio? \n";
		cin >> sombrapredio;

		cout << "\nQual a medida da sua sombra? \n";
		cin >> sombrapessoa;

		cout << "\nQual a sua altura? \n";
		cin >> altura;

		total = (sombrapredio / sombrapessoa) * altura;

		cout << "\nA altura do predio e: " << total << " metros";

		cout << "\n\nDeseja nova medida? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
