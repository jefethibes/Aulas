package Exercicio1;

/*1 – Crie uma classe chamada Animal que terá os seguintes atributos: especie, qtdPatas, pele, cor.
Criar os métodos get e set de todos os atributos.
Criar uma segunda classe que se chamará CriaAnimal e que terá o método main.  Você deve setar os
valores para o animal e depois mostrar os valores.
Logo após crie outro Animal e sete novamente outros valores. Não se esqueça de mostrar os resultados.
Crie um método para trocar a espécie do animal.*/

public class CriaAnimal {

    public static void main(String args[]){

        Animal animal = new Animal();
        Animal animal2 = new Animal();

        animal.setEspecie("Leão");
        animal.setQtdPatas(4);
        animal.setCor("Amarelo");
        animal.setPele("Pelos");

        animal2.setEspecie("Tartaruga");
        animal2.setQtdPatas(4);
        animal2.setCor("Verde");
        animal2.setPele("Casco e pele");

        animal.printAnimal();
        animal2.printAnimal();

        animal.alteraEspecie();

        animal.printAnimal();

    }

}
