package Exercicio2;

public class FutebolCampo implements Futebol{

    public String posseBola() {
        return "70%";
    }

    public String tempoTotal() {
        return "90 minutos";
    }

    public String tipoCalcado() {
        return "Chuteira";
    }

    public int qtdPessoas() {
        return 22;
    }

    public String objetoPrincipal() {
        return "Bola";
    }

    public String objetivo() {
        return "Fazer gol";
    }

    public void printFutebolCampo(){
        System.out.println("Posse de bola: " + posseBola() +
                "\nTempo total: " + tempoTotal() +
                "\nTipo de calçado: " + tipoCalcado() + "\n");
    }
}
