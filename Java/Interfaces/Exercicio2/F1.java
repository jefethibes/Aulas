package Exercicio2;

public class F1 implements Automobilismo{

    public String tempoTotal() {
        return "2 horas";
    }

    public String tipoCombustivel() {
        return "Gasolina";
    }

    public double qtdLitrosTanque() {
        return 50.5;
    }

    public int qtdPessoas() {
        return 30;
    }

    public String objetoPrincipal() {
        return "Carro de F1";
    }

    public String objetivo() {
        return "Chegar na frente";
    }

    public void printF1(){
        System.out.println("Tempo total: " + tempoTotal() +
                "\nTipo combustivel: " + tipoCombustivel() +
                "\nQuantidade de combustivel por tanque: " +qtdLitrosTanque() + "\n");
    }

}
