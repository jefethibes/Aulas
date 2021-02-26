/*5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do litro da
 gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.*/

#include<conio.h>
#include<iostream>

using namespace std;

float reais;
float valor;
float litros;
char op;

main () {
	do {
		system("cls");

		cout << "Qual o valor da gasolina? \n";
		cin >> valor;

		cout << "\nQuantos reais voce gostaria de abastecer? \n";
		cin >> reais;

		litros = reais / valor;
		
		cout.precision(5);
		cout << "\nCom o valor de R$" << reais << " serao abastecidos " << litros << " litros de gasolina em seu carro";

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
