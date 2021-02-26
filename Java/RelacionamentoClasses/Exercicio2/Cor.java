package Exercicio2;

public class Cor {

    private Integer codigo;
    private String nome;

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

    public void printaCor(){
        System.out.println("Cor: " + getNome() + ", Código: " + getCodigo());
    }

}
