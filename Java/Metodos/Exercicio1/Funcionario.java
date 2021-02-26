package Exercicio1;

public class Funcionario {

    private String nome;
    private double salario;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    protected double bonificacao(){
        return 0;
    }

    protected double pisoSalarial(){
        return 1000;
    }

    protected double valorTotal(){
        return bonificacao() + pisoSalarial() + getSalario();
    }

    protected void listaDados(){
        System.out.println("Dados do funcionario:" +
        "\nNome: " + getNome() + "\nSalário: " + getSalario() +
        "\nPiso salario: " + pisoSalarial() + "\nBonificação: " + bonificacao() +
        "\nValor Final: " + valorTotal() + "\n");
    }

}
