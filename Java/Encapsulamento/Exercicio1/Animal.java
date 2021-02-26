package Exercicio1;

public class Animal {

    private String especie;
    private Integer qtdPatas;
    private String pele;
    private String cor;

    public String getEspecie() {
        return especie;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }

    public Integer getQtdPatas() {
        return qtdPatas;
    }

    public void setQtdPatas(Integer qtdPatas) {
        this.qtdPatas = qtdPatas;
    }

    public String getPele() {
        return pele;
    }

    public void setPele(String pele) {
        this.pele = pele;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void alteraEspecie(){
        setEspecie("Cavalo");
    }

    public void printAnimal(){
        System.out.println("Dados do animal:" +
                "\nEspécie: " + getEspecie() +
                "\nPatas: " + getQtdPatas() +
                "\nCor: " + getCor() +
                "\nPele: " + getPele() + "\n");
    }
}
