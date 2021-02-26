package Exercicio1;

public class TesteAnimal {

    public static void main(String args[]){

        Animal animal = new Animal();

        animal.altura = 1.20;
        animal.classe = "Caninos";
        animal.cor_da_pele = "Marrom";
        animal.especie = "Cachorro";
        animal.patas = 4;
        animal.pele = "Pelos";
        animal.peso = 5.5;
        animal.raca = "Dalmata";

        System.out.println("Especie: " + animal.especie);
        System.out.println("Raça: " + animal.raca);
        System.out.println("Classe: " + animal.classe);
        System.out.println("Cor da Pele: " + animal.cor_da_pele);
        System.out.println("Pele: " + animal.pele);
        System.out.println("Patas: " + animal.patas);
        System.out.println("Altura: " + animal.altura);
        System.out.println("Peso: " + animal.peso);

    }

}