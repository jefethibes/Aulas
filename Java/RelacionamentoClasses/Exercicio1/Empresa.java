package Exercicio1;

public class Empresa {

    private String nome;
    private String enrdereco;
    private String fone;
    private Cidade cidade;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEnrdereco() {
        return enrdereco;
    }

    public void setEnrdereco(String enrdereco) {
        this.enrdereco = enrdereco;
    }

    public String getFone() {
        return fone;
    }

    public void setFone(String fone) {
        this.fone = fone;
    }

    public Cidade getCidade() {
        return cidade;
    }

    public void setCidade(Cidade cidade) {
        this.cidade = cidade;
    }

    public void printaEmpresa(){
        System.out.println("Informações da Empresa:" +
                "\nNome: " + getNome() + "\nEndereço: " + getEnrdereco() +
                "\nFone: " + getFone() + "\nCidade: " + getCidade().getNome() +
                "\nCódigo Cidade: " + getCidade().getCodigo() + "\nEstado: " + getCidade().getUf().getNome() +
                "\nCódigo Estado: " + getCidade().getUf().getCodigo() + "\nSigla: " +
                getCidade().getUf().getSigla() + "\n");
    }

}
