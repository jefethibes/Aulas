/*7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano.
Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/

#include<conio.h>
#include<iostream>

using namespace std;

int dia;
int dias;
int mes;
char op;

main () {
	do {
		system("cls");

		do {
			cout << "Digite um dia do mes: ";
			cin >> dia;
		} while((dia > 30)||(dia == 0));

		cout << "\n1 - Janeiro"	;
		cout << "\n2 - Fevereiro";
		cout << "\n3 - Marco";
		cout << "\n4 - Abril";
		cout << "\n5 - Maio";
		cout << "\n6 - Junho";
		cout << "\n7 - Julho";
		cout << "\n8 - Agosto";
		cout << "\n9 - Setembro";
		cout << "\n10 - Outubro";
		cout << "\n11 - Novembro";
		cout << "\n12 - Dezembro";

		do {
			cout << "\n\nDigite o numero referente a um mes: ";
			cin >> mes;
		} while((mes > 12)||(mes == 0));

		switch(mes) {
			case 1: {
				cout << "\nJa se passaram " << dia << " dias que comecou o ano!";
				break;
			}

			case 2: {
				dias = 30 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 3: {
				dias = 60 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 4: {
				dias = 90 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 5: {
				dias = 120 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 6: {
				dias = 150 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 7: {
				dias = 180 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 8: {
				dias = 210 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 9: {
				dias = 240 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 10: {
				dias = 270 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 11: {
				dias = 300 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}

			case 12: {
				dias = 330 + dia;
				cout << "\nJa se passaram " << dias << " dias que comecou o ano!";
				break;
			}
		}

		cout << "\n\nDeseja nova data? <S> ou <N>";

		op = getche();
		op = toupper(op);
	} while(op != 'N');
}

