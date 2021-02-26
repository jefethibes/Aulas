package Exercicio2;

public class CemMetrosRasos implements Natacao{

    public String tamanhoPiscina() {
        return "100x20";
    }

    public String melhorMarca() {
        return "25 segundos";
    }

    public String nomeRecordista() {
        return "Tio Patinhas";
    }

    public int qtdPessoas() {
        return 8;
    }

    public String objetoPrincipal() {
        return "Piscina";
    }

    public String objetivo() {
        return "Chegar na frente";
    }

    public void printCemMetrosRasos(){
        System.out.println("Tamanho piscina: " + tamanhoPiscina() +
                "\nMelhor Marca: " + melhorMarca() +
                "\nNome do Recordista: " + nomeRecordista() + "\n");
    }

}
