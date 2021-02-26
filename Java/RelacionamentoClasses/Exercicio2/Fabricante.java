package Exercicio2;

public class Fabricante {

    private Integer codigo;
    private String nome;
    private String fone;
    private CidadeEx2 cidade;

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

    public String getFone() {
        return fone;
    }

    public void setFone(String fone) {
        this.fone = fone;
    }

    public CidadeEx2 getCidade() {
        return cidade;
    }

    public void setCidade(CidadeEx2 cidade) {
        this.cidade = cidade;
    }

    public void printaFabricante(){
        System.out.println("Fabricante: " + getNome() + ", Código: " + getCodigo() + ", Fone: " +getFone());
    }

}
