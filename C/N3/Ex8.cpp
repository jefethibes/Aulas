/*8. Leia dois vetores de 20 posições e calcule um outro vetor contendo, 
nas posições pares os valores do primeiro e nas posições impares os 
valores do segundo.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int veta[20];
int vetb[20];
int vetc[40];
char op;
int j;

main() {

	do {

		system("cls");

		cout<<"\n Digite 20 valores para o vetor A: \n";

		for(int i=0; i<20; i++) {
			cout<<"Vetor["<<i<<"]:";
			cin>>veta[i];
		}
		
		cout<<"\n Digite 20 valores para o vetor B: \n";

		for(int i=0; i<20; i++) {
			cout<<"Vetor["<<i<<"]:";
			cin>>vetb[i];
		}

		cout<<"\n O novo Vetor e:";
		
		j = 0;
		
		for(int i=0; i<40; i++) {
			vetc[i]=veta[j];
			j++;
			i++;
		}
		
		j = 0;
		
		for(int i=1; i<40; i++) {
			vetc[i]=vetb[j];
			j++;
			i++;
		}
		
		system("cls");
		
		for(int i = 0; i < 40; i++) {
			cout << "\nVetC[" << i << "]= " << vetc[i];
		} 

		cout<<"\n\n Deseja novos valores <S> novos <N> Sair:";
		op=getche();
		op=toupper(op);
	} while(op != 'N');
}
