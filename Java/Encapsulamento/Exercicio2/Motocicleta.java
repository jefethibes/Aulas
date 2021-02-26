package Exercicio2;

public class Motocicleta {

    private String marca;
    private String fabricante;
    private Integer ano;
    private boolean freioDisco;

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getFabricante() {
        return fabricante;
    }

    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }

    public Integer getAno() {
        return ano;
    }

    public void setAno(Integer ano) {
        this.ano = ano;
    }

    public boolean isFreioDisco() {
        return freioDisco;
    }

    public void setFreioDisco(boolean freioDisco) {
        this.freioDisco = freioDisco;
    }

    public void printMotocicleta(){
        System.out.println("Dados da motocicleta:" +
                "\nMarca: " + getMarca() +
                "\nFabricante: " + getFabricante() +
                "\nAno: " + getAno() +
                "\nFreio a disco: " + isFreioDisco() + "\n");
    }
}
