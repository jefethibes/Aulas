/*39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que estão atrasadas. 
Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre 
quanto restará do salário do João;*/

#include<conio.h>
#include<iostream>

using namespace std;

float salario;

main () {
	system("cls");

	salario = 1200 - (200 + ((200 / 100) * 2)) - (120 + ((120 / 100) * 2));

	cout << "Restarao do salario de Joao R$" << salario;
}
