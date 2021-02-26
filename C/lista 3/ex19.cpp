/*19. A granja Frangotech possui um controle automatizado de cada frango da sua produção.
No pé direito do frango há um anel com um chip de identificação; no pé esquerdo são dois
anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa
R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos.*/

#include<conio.h>
#include<iostream>

using namespace std;

int qtd;
float total;
char op;

main () {
	do {
		system("cls");

		cout << "Quantos frangos tem na producao? \n";
		cin >> qtd;

		total = (qtd * 4) + (qtd * 7);

		cout << "\nSeram gastos R$" << total << " para marcar todos os frangos da granja!";
		
		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
