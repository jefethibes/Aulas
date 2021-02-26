/*9. Leia um vetor de 5 posições contendo os caracteres de um número.
Em seguida escreva esse número por extenso.*/

#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int vet[5];
int aux,aux1;

main() {

	for(int i=0; i<5; i++) {

		do {
			cout<<"\n Numero["<<i<<"]:";
			cin>>vet[i];
		} while (vet[i] > 9);
	}

	if ((vet[0] > 0) && (vet[1] == 0)) {

		if (vet[0] == 1) {
			cout << "Dez mil ";
		}
		if (vet[0] == 2) {
			cout << "Vinte mil ";
		}
		if (vet[0] == 3) {
			cout << "Trinta mil ";
		}
		if (vet[0] == 4) {
			cout << "Quarenta mil ";
		}
		if (vet[0] == 5) {
			cout << "Cinquenta mil ";
		}
		if (vet[0] == 6) {
			cout << "Sessenta mil ";
		}
		if (vet[0] == 7) {
			cout << "Setenta mil ";
		}
		if (vet[0] == 8) {
			cout << "Oitenta mil ";
		}
		if (vet[0] == 9) {
			cout << "Noventa mil ";
		}
	}

	if ((vet[0] > 1) && (vet[1] > 0)) {

		if (vet[0] == 2) {
			cout << "Vinte e";
		}
		if (vet[0] == 3) {
			cout << "Trinta e ";
		}
		if (vet[0] == 4) {
			cout << "Quarenta e ";
		}
		if (vet[0] == 5) {
			cout << "Cinquenta e ";
		}
		if (vet[0] == 6) {
			cout << "Sessenta e ";
		}
		if (vet[0] == 7) {
			cout << "Setenta e ";
		}
		if (vet[0] == 8) {
			cout << "Oitenta e ";
		}
		if (vet[0] == 9) {
			cout << "Noventa e ";
		}
	}

	if ((vet[0] > 1) && (vet[1] > 0)) {

		if (vet[1] == 1) {
			cout << "um mil";
		}
		if (vet[1] == 2) {
			cout << "dois mil ";
		}
		if (vet[1] == 3) {
			cout << "tres mil ";
		}
		if (vet[1] == 4) {
			cout << "quatro mil ";
		}
		if (vet[1] == 5) {
			cout << "cinco mil ";
		}
		if (vet[1] == 6) {
			cout << "seis mil ";
		}
		if (vet[1] == 7) {
			cout << "sete mil ";
		}
		if (vet[1] == 8) {
			cout << "oito mil ";
		}
		if (vet[1] == 9) {
			cout << "nove mil ";
		}
	}

	if ((vet[0] == 1) && (vet[1] > 0)) {

		if (vet[1] == 1) {
			cout << "Onze mil";
		}
		if (vet[1] == 2) {
			cout << "Doze mil ";
		}
		if (vet[1] == 3) {
			cout << "Treze mil ";
		}
		if (vet[1] == 4) {
			cout << "Quatorze mil ";
		}
		if (vet[1] == 5) {
			cout << "Quinze mil ";
		}
		if (vet[1] == 6) {
			cout << "Dezesseis mil ";
		}
		if (vet[1] == 7) {
			cout << "Dezesete mil ";
		}
		if (vet[1] == 8) {
			cout << "Dezoito mil ";
		}
		if (vet[1] == 9) {
			cout << "Dezenove mil ";
		}
	}

	if ((vet[0] == 0) && (vet[1] > 0)) {

		if (vet[1] == 1) {
			cout << "Mil";
		}
		if (vet[1] == 2) {
			cout << "Mois mil ";
		}
		if (vet[1] == 3) {
			cout << "Tres mil ";
		}
		if (vet[1] == 4) {
			cout << "Quatro mil ";
		}
		if (vet[1] == 5) {
			cout << "Cinco mil ";
		}
		if (vet[1] == 6) {
			cout << "Seis mil ";
		}
		if (vet[1] == 7) {
			cout << "Sete mil ";
		}
		if (vet[1] == 8) {
			cout << "Oito mil ";
		}
		if (vet[1] == 9) {
			cout << "Nove mil ";
		}
	}

	if ((vet[2] > 0) && (vet[1] == 0) && (vet[0] == 0) && (vet[3] == 0) && (vet[4] == 0)) {

		if (vet[2] == 1) {
			cout << "Cem ";
		}
		if (vet[2] == 2) {
			cout << "Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "Novecentos ";
		}
	}

	if ((vet[2] > 0) && (vet[1] > 0) && (vet[0] > 0) && (vet[3] == 0) && (vet[4] == 0)) {

		if (vet[2] == 1) {
			cout << "e Cem ";
		}
		if (vet[2] == 2) {
			cout << "e Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "e Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "e Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "e Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "e Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "e Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "e Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "e Novecentos ";
		}
	}

	if ((vet[2] > 0) && (vet[1] > 0) && (vet[0] == 0) && (vet[3] == 0) && (vet[4] == 0)) {

		if (vet[2] == 1) {
			cout << "e Cem ";
		}
		if (vet[2] == 2) {
			cout << "e Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "e Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "e Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "e Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "e Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "e Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "e Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "e Novecentos ";
		}
	}

	if ((vet[2] > 0) && (vet[1] == 0) && (vet[0] > 0) && (vet[3] == 0) && (vet[4] == 0)) {

		if (vet[2] == 1) {
			cout << "e Cem ";
		}
		if (vet[2] == 2) {
			cout << "e Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "e Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "e Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "e Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "e Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "e Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "e Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "e Novecentos ";
		}
	}

	if ((vet[2] > 0)&&(vet[3] > 0)&&(vet[4] > 0)) {

		if (vet[2] == 1) {
			cout << "Cento ";
		}
		if (vet[2] == 2) {
			cout << "Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "Novecentos ";
		}
	}

	if ((vet[2] > 0)&&(vet[3] > 0)&&(vet[4] == 0)) {

		if (vet[2] == 1) {
			cout << "Cento ";
		}
		if (vet[2] == 2) {
			cout << "Duzentos ";
		}
		if (vet[2] == 3) {
			cout << "Trezentos ";
		}
		if (vet[2] == 4) {
			cout << "Quatrocentos ";
		}
		if (vet[2] == 5) {
			cout << "Quinhentos ";
		}
		if (vet[2] == 6) {
			cout << "Seiscentos ";
		}
		if (vet[2] == 7) {
			cout << "Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "Novecentos ";
		}
	}

	if ((vet[2] > 0)&&(vet[3] == 0)&&(vet[4] > 0)) {

		if (vet[2] == 1) {
			cout << "Cento  ";
		}
		if (vet[2] == 2) {
			cout << "Duzentos  ";
		}
		if (vet[2] == 3) {
			cout << "Trezentos  ";
		}
		if (vet[2] == 4) {
			cout << "Quatrocentos  ";
		}
		if (vet[2] == 5) {
			cout << "Quinhentos  ";
		}
		if (vet[2] == 6) {
			cout << "Seiscentos  ";
		}
		if (vet[2] == 7) {
			cout << "Setecentos ";
		}
		if (vet[2] == 8) {
			cout << "Oitocentos ";
		}
		if (vet[2] == 9) {
			cout << "Novecentos ";
		}
	}

	aux = 0;

	for(int i = 0; i < 3; i++) {

		if(vet[i] > aux) {

			if((vet[3] > 1) && (vet[4] == 0)) {
				if (vet[3] == 2) {
					cout << "e vinte ";
				}
				if (vet[3] == 3) {
					cout << "e trinta ";
				}
				if (vet[3] == 4) {
					cout << "e quarenta  ";
				}
				if (vet[3] == 5) {
					cout << "e cinquenta  ";
				}
				if (vet[3] == 6) {
					cout << "e sessenta  ";
				}
				if (vet[3] == 7) {
					cout << "e setenta  ";
				}
				if (vet[3] == 8) {
					cout << "e oitenta  ";
				}
				if (vet[3] == 9) {
					cout << "e noventa  ";
				}
			}

			if ((vet[3] > 1) && (vet[4] > 0)) {
				if (vet[3] == 2) {
					cout << "e vinte ";
				}
				if (vet[3] == 3) {
					cout << "e trinta ";
				}
				if (vet[3] == 4) {
					cout << "e quarenta ";
				}
				if (vet[3] == 5) {
					cout << "e cinquenta ";
				}
				if (vet[3] == 6) {
					cout << "e sessenta ";
				}
				if (vet[3] == 7) {
					cout << "e setenta ";
				}
				if (vet[3] == 8) {
					cout << "e oitenta ";
				}
				if (vet[3] == 9) {
					cout << "e noventa ";
				}
			}

			if ((vet[3] == 1) && (vet[4] >= 0)) {
				if (vet[4] == 0) {
					cout << "e dez";
				}
				if (vet[4] == 1) {
					cout << "e onze";
				}
				if (vet[4] == 2) {
					cout << "e doze";
				}
				if (vet[4] == 3) {
					cout << "e treze";
				}
				if (vet[4] == 4) {
					cout << "e quatorze";
				}
				if (vet[4] == 5) {
					cout << "e quinze";
				}
				if (vet[4] == 6) {
					cout << "e dezesseis";
				}
				if (vet[4] == 7) {
					cout << "e dezesete";
				}
				if (vet[4] == 8) {
					cout << "e dezoito";
				}
				if (vet[4] == 9) {
					cout << "e dezenove";
				}
			}
			aux = 999999;
		}
	}

	for(int i = 0; i < 3; i++) {
		if(vet[i] == aux) {

			if ((vet[3] > 1) && (vet[4] == 0)) {
				if (vet[3] == 2) {
					cout << "vinte";
				}
				if (vet[3] == 3) {
					cout << "trinta";
				}
				if (vet[3] == 4) {
					cout << "quarenta";
				}
				if (vet[3] == 5) {
					cout << "cinquenta";
				}
				if (vet[3] == 6) {
					cout << "sessenta";
				}
				if (vet[3] == 7) {
					cout << "setenta";
				}
				if (vet[3] == 8) {
					cout << "oitenta";
				}
				if (vet[3] == 9) {
					cout << "noventa";
				}
			}

			if ((vet[3] == 1) && (vet[4] >= 0)) {
				if (vet[4] == 0) {
					cout << "dez";
				}
				if (vet[4] == 1) {
					cout << "onze";
				}
				if (vet[4] == 2) {
					cout << "doze";
				}
				if (vet[4] == 3) {
					cout << "treze";
				}
				if (vet[4] == 4) {
					cout << "quatorze";
				}
				if (vet[4] == 5) {
					cout << "quinze";
				}
				if (vet[4] == 6) {
					cout << "dezesseis";
				}
				if (vet[4] == 7) {
					cout << "dezesete";
				}
				if (vet[4] == 8) {
					cout << "dezoito";
				}
				if (vet[4] == 9) {
					cout << "dezenove";
				}
			}

			if ((vet[3] > 1)&&(vet[4] > 0)) {
				if (vet[3] == 2) {
					cout << "vinte e ";
				}
				if (vet[3] == 3) {
					cout << "trinta e ";
				}
				if (vet[3] == 4) {
					cout << "quarenta e ";
				}
				if (vet[3] == 5) {
					cout << "cinquenta e ";
				}
				if (vet[3] == 6) {
					cout << "sessenta e ";
				}
				if (vet[3] == 7) {
					cout << "setenta e ";
				}
				if (vet[3] == 8) {
					cout << "oitenta e ";
				}
				if (vet[3] == 9) {
					cout << "noventa e ";
				}
			}
			aux = 999999;
		}
	}

	aux1 = 0;

	for(int i = 0; i < 3; i++) {
		if(vet[i] > aux1) {
			if((vet[4] > 0) && (vet [3] != 1)) {
				if (vet[4] == 1) {
					cout << "e um";
				}
				if (vet[4] == 2) {
					cout << "e dois";
				}
				if (vet[4] == 3) {
					cout << "e tres";
				}
				if (vet[4] == 4) {
					cout << "e quatro";
				}
				if (vet[4] == 5) {
					cout << "e cinco";
				}
				if (vet[4] == 6) {
					cout << "e seis";
				}
				if (vet[4] == 7) {
					cout << "e sete";
				}
				if (vet[4] == 8) {
					cout << "e oito";
				}
				if (vet[4] == 9) {
					cout << "e nove";
				}

				aux1 = 999999;
			}
		}
	}

	if((vet[4] >= 0)&&(vet[3]==0)&&(vet[2]==0)&&(vet[1]==0)&&(vet[0]==0)) {
		if (vet[4] == 0) {
			cout << "zero";
		}
		if (vet[4] == 1) {
			cout << "um";
		}
		if (vet[4] == 2) {
			cout << "dois";
		}
		if (vet[4] == 3) {
			cout << "tres";
		}
		if (vet[4] == 4) {
			cout << "quatro";
		}
		if (vet[4] == 5) {
			cout << "cinco";
		}
		if (vet[4] == 6) {
			cout << "seis";
		}
		if (vet[4] == 7) {
			cout << "sete";
		}
		if (vet[4] == 8) {
			cout << "oito";
		}
		if (vet[4] == 9) {
			cout << "nove";
		}
	}
}





