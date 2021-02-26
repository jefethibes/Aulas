/*3 - Algoritmo Media Valor
Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média destes,
e em seguida apresente esta média e caso esta seja maior e igual que 30 graus escreva "temperatura acima da média, calor",
caso esta média seja inferior ou igual a 15 graus "temperatura a baixo da média, frio " e se esta estiver no intervalo entre
estes dois valores, "temperatura mediana, temperatura agradável"*/

#include<iostream>
#include<conio.h>

using namespace std;

int temp;
int aux;
int media;
char op;

main () {
	do {
		system("cls");

		cout << "Digite cinco temperaturas: \n";

		aux = 0;

		for(int i = 0; i < 5; i++) {
			cin >> temp;
			aux = aux + temp;
		}

		media = aux / 5;

		if(media >= 30) {
			cout << media << " graus, temperatura acima da media, calor";
		}

		if(media <= 15) {
			cout << media << " graus, temperatura abaixo da media, frio";
		}

		else {
			cout << media << " graus, temperatura mediana, agradavel";
		}

		cout << "\n\nDeseja novas temperaturas? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

