package Exercicio3;

public class Produto {

    private Integer codigo;
    private String nome;
    private double valor;

    public Integer getCodigo() {
        return codigo;
    }

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public void printProduto(){
        System.out.println("Dados do poduto:" +
                "\nCódigo: " + getCodigo() +
                "\nNome: " + getNome() +
                "\nValor: " + getValor() + "\n");
    }
}
