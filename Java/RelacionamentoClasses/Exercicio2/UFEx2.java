package Exercicio2;

public class UFEx2 {

    private String codigo;
    private String nome;
    private String sigla;

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

    public String getSigla() {
        return sigla;
    }

    public void setSigla(String sigla) {
        this.sigla = sigla;
    }

    public void printaUf(){
        System.out.println("UF: " + getNome() + ", Sigla: " + getSigla() + ", Código: " + getCodigo() + "\n");
    }

}
