/*15. Tr�s amigos, Carlos, Andr� e Felipe, decidiram rachar igualmente a conta de um bar.
Fa�a um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar,
mas fa�a com que Carlos e Andr� n�o paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00
para Carlos, R$33,00 para Andr� e R$35,53 para Felipe.*/

#include<conio.h>
#include<iostream>

using namespace std;

float conta;
int inteiro;
float comcentavos;
char op;

main () {
	do {
		system("cls");

		cout << "Quanto deu a conta? \n";
		cin >> conta;

		inteiro = conta / 3;
		comcentavos = (((conta / 3) - inteiro) + ((conta / 3 ) - inteiro) + ((conta / 3) - inteiro)) + inteiro;

		cout << "\nA conta dividida entre Carlos, Andre e Felipe fica assim: \n";
		cout << "\nCarlos: R$" << inteiro;
		cout << "\nAndre: R$" << inteiro;
		cout << "\nFelipe: R$" << comcentavos;

		cout << "\n\nDeseja novo valor? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
