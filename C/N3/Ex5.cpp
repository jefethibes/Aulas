/*5. Considere que determinada empresa tem registrado numa tabela,
os consumos mensais de energia elétrica ao longo de 3 anos para o primeiro
semestre.  Cada linha representa um ano e cada coluna um mês. Faça um
programa que, considerando estes dados, determine: a) O consumo médio em
cada um dos meses. b) Qual mês a empresa gasta mais energia. c) Qual o ano
e mês de maior consumo dos últimos 3 anos.

Mês/Ano  JAN   FEV   MAR   ABR   MAI   JUN
2014     100   530   500   300   400   303
2015     123   345   234   667   787   900
2016     809   879   500   900  434   233 */

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int a[6] =  { 100, 530, 500, 300, 400, 303};
int b[6] = { 123, 545, 234, 667, 787, 900};
int c[6] = { 809, 879, 500, 900, 434, 233};
float maior,maiormes,maiora,maiorb,maiorc;
float aux[6];
float mediaA,mediaB,mediaC;
float mediames[6];
int auxa,auxb,auxc;

main() {
	cout<<"\nMês/Ano  JAN   FEV   MAR   ABR   MAI   JUN";
	cout<<"\n2014     100   530   500   300   400   303";
	cout<<"\n2015     123   345   234   667   787   900";
	cout<<"\n2016     809   879   500   900   434   233";

	for(int i=0; i<6; i++) {
		aux[i] = ((a[i]+b[i]+c[i])/3);
	}

	cout<<"\n O consumo médio em cada um dos meses \n";
	cout<<"\n Media de consumo em Janeiro: "<<aux[0];
	cout<<"\n Media de consumo em Fevereiro: "<<aux[1];
	cout<<"\n Media de consumo em Marco: "<<aux[2];
	cout<<"\n Media de consumo em Abril: "<<aux[3];
	cout<<"\n Media de consumo em Maio: "<<aux[4];
	cout<<"\n Media de consumo em Junho: "<<aux[5];

	maior = 0;

	cout<<"\n\n O mês que mais gasta energia é o mês de: ";

	for(int i = 0; i < 6; i++) {
		if(aux[i] > maior) {
			maior = aux[i];
		}
	}

	for(int i = 0; i < 6; i++) {
		if(maior == aux[i]) {
			if(i == 0) {
				cout<<"Janeiro: "<<maior;
			}
			if(i == 1) {
				cout<<"Fevereiro: "<<maior;
			}
			if(i == 2) {
				cout<<"Março: "<<maior;
			}
			if(i == 3) {
				cout<<"Abril: "<<maior;
			}
			if(i == 4) {
				cout<<"Maio: "<<maior;
			}
			if(i == 5) {
				cout<<"Junho: "<<maior;
			}
		}
	}
	
	mediaA = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5])/6;
	mediaB = (b[0]+b[1]+b[2]+b[3]+b[4]+b[5])/6;
	mediaC = (c[0]+c[1]+c[2]+c[3]+c[4]+c[5])/6;
	
	if((mediaA > mediaB)&&(mediaA > mediaC)) {
		cout<<"\n\n O ano de maior consumo é: 2014, e gastou em media: "<<mediaA;
	}
	
	if((mediaB > mediaA)&&(mediaB > mediaC)) {
		cout<<"\n\n O ano de maior consumo é: 2015, e gastou em media: "<<mediaB;
	}
	
	if((mediaC > mediaB)&&(mediaC > mediaA)) {
		cout<<"\n\n O ano de maior consumo é: 2016, e gastou em media: "<<mediaC;
	}
	
	maiormes = 0;
	maiora = 0;
	maiorb = 0;
	maiorc = 0;
	
	for(int i = 0; i < 6; i++) {
		if(a[i] > maiora) {
			maiora = a[i];
			auxa = i;
		}
		if(b[i] > maiorb) {
			maiorb = b[i];
			auxb = i;
		}
		if(c[i] > maiorc) {
			maiorc = c[i];
			auxc = i;
		}
	}
	
	if((maiora >= maiorb)&&(maiora >= maiorc)) {
		if(auxa == 0) {
			cout<<"\nO mês e ano que mais gasta energia foi janeiro/2014 ";
		}
		if(auxa == 1) {
			cout<<"\nO mês e ano que mais gasta energia foi fevereiro/2014 ";
		}
		if(auxa == 2) {
			cout<<"\nO mês e ano que mais gasta energia foi março/2014 ";
		}
		if(auxa == 3) {
			cout<<"\nO mês e ano que mais gasta energia foi abril/2014 ";
		}
		if(auxa == 4) {
			cout<<"\nO mês e ano que mais gasta energia foi maio/2014 ";
		}
		if(auxa == 5) {
			cout<<"\nO mês e ano que mais gasta energia foi junho/2014 ";
		}
	}	
	
	if((maiorb >= maiora)&&(maiorb >= maiorc)) {
		if(auxb == 0) {
			cout<<"\nO mês e ano que mais gasta energia foi janeiro/2015 ";
		}
		if(auxb == 1) {
			cout<<"\nO mês e ano que mais gasta energia foi fevereiro/2015 ";
		}
		if(auxb == 2) {
			cout<<"\nO mês e ano que mais gasta energia foi março/2015 ";
		}
		if(auxb == 3) {
			cout<<"\nO mês e ano que mais gasta energia foi abril/2015 ";
		}
		if(auxb == 4) {
			cout<<"\nO mês e ano que mais gasta energia foi maio/2015 ";
		}
		if(auxb == 5) {
			cout<<"\nO mês e ano que mais gasta energia foi junho/2015 ";
		}
	}	
	
	if((maiorc >= maiorb)&&(maiorc >= maiora)) {
		if(auxc == 0) {
			cout<<"\nO mês e ano que mais gasta energia foi janeiro/2016 ";
		}
		if(auxc == 1) {
			cout<<"\nO mês e ano que mais gasta energia foi fevereiro/2016 ";
		}
		if(auxc == 2) {
			cout<<"\nO mês e ano que mais gasta energia foi março/2016 ";
		}
		if(auxc == 3) {
			cout<<"\nO mês e ano que mais gasta energia foi abril/2016 ";
		}
		if(auxc == 4) {
			cout<<"\nO mês e ano que mais gasta energia foi maio/2016 ";
		}
		if(auxc == 5) {
			cout<<"\nO mês e ano que mais gasta energia foi junho/2016 ";
		}
	}	
}





