/* 2. Uma empresa paga R$ 33.00 por hora normal trabalhada e R$ 53.00 por hora
extra. O Programa deve ler 05 funcionários, o total de horas normais e o total de
horas extras trabalhadas para cada empregado em um ano e calcular o salário anual
de cada trabalhador. Assuma que o trabalhador deve pagar 10% de imposto se o seu
salário anual for menor ou igual a R$ 12000.00. Caso o salário seja maior que este
valor o imposto devido é igual a 10% sobre R$ 12000.00 mais 25% sobre o que passar
de R$ 12000.00. Este programa deve também calcular o imposto devido pelo trabalhador.
Apresentar no final o nome de cada trabalhador, a quantidade de horas trabalhadas
no ano, a quantidade de horas extras feitas no ano, o valor total do salário de um
ano, e o valor de imposto devido por cada um deles. */

#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

float horanormal=33,horaextra=53,hfnormal,hfextra,imposto10,imposto25;
float salario,salariofinal,imposto;
char funcionario[20];
char op;

main() {

	do {
		for(int i=0; i<5; i++) {

			cout<<"\n Nome Funcionario: ";
			cin>>funcionario;
			cout<<"\n Horas trabalhadas por ano normal: ";
			cin>>hfnormal;
			cout<<"\n Horas trabalhadas por ano extra: ";
			cin>>hfextra;

			salario= (horanormal*hfnormal)+(horaextra*hfextra);

			if (salario<12001) {
				imposto10=(salario*0.1);
			} else (imposto10=12000*.1);

			if (salario>12000) {
				imposto25= ((salario-12000)*0.25);
			}

			salariofinal= (salario-imposto10-imposto25);
			imposto=(imposto10+imposto25);

			cout<<"\n Nome Funcionario: "<<funcionario;
			cout<<"\n Horas Normais: "<<hfnormal;
			cout<<"\n Horas Extras: "<<hfextra;
			cout<<"\n Salario: "<<salariofinal;
			cout<<"\n Imposto: "<<imposto;
			cout<<"\n\n";
		}

		cout<<"\n\n Deseja novos valores <S> novos <N> Sair:";
		op=getche();
		op=toupper(op);

	} while(op != 'N');

}
