/*3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado).
 Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo para ler as
quantidades de p�es e de broas, e depois calcular os dados solicitados.*/

#include<conio.h>
#include<iostream>

using namespace std;

float broas;
float paes;
float total;
float poupanca;
char op;

main () {
	do {
		system("cls");

		cout << "Digite as quantidades vendidas: ";
		cout << "\nBroas: ";
		cin >> broas;
		cout << "Paes: ";
		cin >> paes;

		total = (broas * 1.5) + (paes * 0.12);
		poupanca = (total / 100) * 10;

		cout << "\nO total arecadado foi de: R$" << total;

		cout << "\n\nA quantidade a ser guardada na poupanca e: R$" << poupanca;

		cout << "\n\nDeseja novos valores? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}
