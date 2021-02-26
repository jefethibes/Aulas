package Exercicio2;

/*Crie uma interface chamada Esporte, que terá os seguintes métodos: qtdPessoas, objetoPrincipal e objetivo;
Crie outra interface chamada Natacao que estende Esporte e que terá os seguintes métodos tamanhoPiscina,
melhorMarca, nomeRecordista. As classes que devem implementar esta interface são: CemMetrosRasos,
QuatroPorCem e QuatroPorDuzentos.
Crie uma interface chamada Futebol que estende Esporte e que terá os seguintes métodos: pesoBola,
tempoTotal e tipoDoCalcado. As classes que devem implementar estes métodos são: FutebolDePraia,
FutebolDeCampo e FutebolDeSalao.
Crie uma interface chamada Automobilismo que estende Esporte e que terá os seguintes métodos:
tempoTotal, tipoCombustível, qtdCombustívelTanque. As classes que devem implementar esses métodos são:
F1, FIndy e FTruck.
Crie o método main e crie uma instância de F1, FIndy e FTruck e mostre todos os métodos.
Crie também uma instância de FutebolDePraia, FutebolDeCampo e FutebolDeSalao e mostre todos os métodos.
Para finalizar crie uma instância de cada classe que implementa Natacao e mostre todos os métodos.*/

public class Main {

    public static void main(String args[]){

        CemMetrosRasos cemMetrosRasos = new CemMetrosRasos();
        FutebolCampo futebolCampo = new FutebolCampo();
        F1 f1 = new F1();

        printEsporte(cemMetrosRasos.qtdPessoas(), cemMetrosRasos.objetoPrincipal(), cemMetrosRasos.objetivo());
        cemMetrosRasos.printCemMetrosRasos();

        printEsporte(futebolCampo.qtdPessoas(), f1.objetoPrincipal(), futebolCampo.objetivo());
        futebolCampo.printFutebolCampo();

        printEsporte(f1.qtdPessoas(), f1.objetoPrincipal(), f1.objetivo());
        f1.printF1();

    }

    public static void printEsporte(int qtdPessoas, String objetoPrincipal, String objetivo){
        System.out.println("Dados do esporte: \nQuantidade de pessoas: " + qtdPessoas +
                "\nObjeto: " + objetoPrincipal + "\nObjetivo: " + objetivo);
    }

}
