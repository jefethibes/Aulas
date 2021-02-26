package Exercicio1;

public class Gerente extends Funcionario {

    @Override
    public double bonificacao() {
        return 50;
    }

    @Override
    public double pisoSalarial() {
        return super.pisoSalarial();
    }

    @Override
    protected double valorTotal() {
        return super.valorTotal();
    }

}
