/*23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura,
fa�a um algoritmo para ler os dados necess�rios e calcular a altura do pr�dio. */

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
