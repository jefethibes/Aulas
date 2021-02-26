package Exercicio2;

public class CidadeEx2 {

    private String codigo;
    private String nome;
    private UFEx2 ufEx2;

    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public UFEx2 getUf() {
        return ufEx2;
    }

    public void setUf(UFEx2 ufEx2) {
        this.ufEx2 = ufEx2;
    }

    public void printaCidade(){
        System.out.println("Cidade: " + getNome() + ", Código: " + getCodigo());
    }

}
