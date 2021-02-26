package Exercicio2;

public class Produto {

    private Integer codigo;
    private String nome;
    private Cor cor;
    private Fabricante fabricante;
    private Double valor;

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

    public Cor getCor() {
        return cor;
    }

    public void setCor(Cor cor) {
        this.cor = cor;
    }

    public Fabricante getFabricante() {
        return fabricante;
    }

    public void setFabricante(Fabricante fabricante) {
        this.fabricante = fabricante;
    }

    public Double getValor() {
        return valor;
    }

    public void setValor(Double valor) {
        this.valor = valor;
    }

    public void printaProduto(){
        System.out.println("Produto: " + getNome() + ", Código: " + getCodigo() +
                ", Valor: R$ " + getValor());
    }

}
