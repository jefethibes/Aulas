/*39. Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que est�o atrasadas. 
Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre 
quanto restar� do sal�rio do Jo�o;*/

#include<conio.h>
#include<iostream>

using namespace std;

float salario;

main () {
	system("cls");

	salario = 1200 - (200 + ((200 / 100) * 2)) - (120 + ((120 / 100) * 2));

	cout << "Restarao do salario de Joao R$" << salario;
}
