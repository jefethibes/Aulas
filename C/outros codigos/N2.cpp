#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int VetA[7];
int VetB[7];
int VetC[14];
int VetD[14];
int aux;
int j;
char op;
char opc;
int maior;
int menor;
int cont;

main() {
	system("cls");

	cout << "Digite 7 valores para o vetor A: ";

	for(int i = 0; i < 7; i++) {
		cout << "\nVetA[" << i << "]= ";
		cin >> VetA[i];
	}

	cout << "Digite 7 valores para o vetor B: ";

	for(int i = 0; i < 7; i++) {
		cout << "\nVetB[" << i << "]= ";
		cin >> VetB[i];
	}

menu:
	
	cout << "\nMenu: ";
	cout << "\n1 - Vetor A em ordem crescente.";
	cout << "\n2 - Vetor B em ordem decrescente.";
	cout << "\n3 - Vetor C composto pelos valores inteiros intercalados de A e B, mostrando A e B.";
	cout << "\n4 - Vetor D.";
	cout << "\n5 - Sair ou voltar para o inicio\n";
	op = getche();

	switch(op) {
		case '1': {
			for(int i = 0; i < 7; i++) {
				for(int j = i; j < 7-1; j++) {
					if(VetA[i] > VetA[j+1]) {
						aux = VetA[i];
						VetA[i] = VetA[j+1];
						VetA[j+1] = aux;
					}
				}
			}


			for(int i = 0; i < 7; i++) {
				cout << "\nVetA[" << i << "]= " << VetA[i];
			}
		}
		goto menu;
		break;

		case '2': {
			for(int i = 0; i < 7; i++) {
				for(int j = i; j < 7-1; j++) {
					if(VetB[i] < VetB[j+1]) {
						aux = VetB[i];
						VetB[i] = VetB[j+1];
						VetB[j+1] = aux;
					}
				}
			}

			for(int i = 0; i < 7; i++) {
				cout << "\nVetB[" << i << "]= " << VetB[i];
			}

			goto menu;
			break;
		}

		case '3': {
			for(int i = 0; i < 7; i++) {
				cout << "\nVetA[" << i << "]= " << VetA[i];
			}

			cout << "\n";

			for(int i = 0; i < 7; i++) {
				cout << "\nVetB[" << i << "]= " << VetB[i];
			}

			cout << "\n\n";

			j = 0;

			for(int i = 0; i < 14; i++) {
				VetC[i] = VetA[j];
				i = i + 1;
				j++;
			}

			j = 0;

			for(int i = 1; i < 14; i++) {
				VetC[i] = VetB[j];
				i = i + 1;
				j++;
			}

			for(int i = 0; i < 14; i++) {
				cout << "\nVetC[" << i << "]= " << VetC[i];
			}
			goto menu;
			break;
		}

		case '4': {
			j = 0;

			for(int i = 0; i < 14; i++) {
				VetD[i] = VetA[j] + VetB[j];
				i = i + 1;
				j++;
			}

			j = 0;

			for(int i = 1; i < 14; i++) {
				VetD[i] = VetA[j] * VetB[j];
				i = i + 1;
				j++;
			}

			for(int i = 0; i < 14; i++) {
				cout << "\nVetD[" << i << "]= " << VetD[i];
			}
			
			maior = 0;
			
			for(int i = 0; i < 14; i++) {
				if(VetD[i] > maior) {
					maior = VetD[i];
					cont = i;
				}
			}
			
			cout << "\n o maior valor VetD[" << cont << "]= " << maior;
			
			menor = 999999;
			cont = 0;
			
			for(int i = 0; i < 14; i++) {
				if(VetD[i] < menor) {
					menor = VetD[i];
					cont = i;
				}
			}
			
			cout << "\n o menor valor VetD[" << cont << "]= " << menor;
			
			goto menu;
			break;
		}

		case '5': {
			exit(0);
			break;
		}
	}
}
