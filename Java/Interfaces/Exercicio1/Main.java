package Exercicio1;

/*Crie uma interface chamada Bicicleta. Ela terá os seguintes métodos:
quantidadeMarchas(); tipoFreio(); marca(); modelo(); material(); velocidade();
Não se esqueça que um método em uma interface não tem corpo e ele é por padrão public e abstract.
Agora crie quatro classes que implementam esta interface, uma se chamará BarraCircular,
outra se chamará BicicletaEstrada, uma se chamará OffRoad e por fim uma classe chamada Profissional.
Para finalizar crie uma classe onde deverá estar o método main e tente criar uma instância de Bicicleta
e veja o resultado. Logo após crie instancia de cada tipo de bicicleta e mostre o resultado dos métodos.*/


public class Main {

    public static void main(String args[]){

        BarraCircular barraCircular = new BarraCircular();

        BicicletaEstrada bicicletaEstrada = new BicicletaEstrada();

        OffRoad offRoad = new OffRoad();

        Profissional profissional = new Profissional();

        printBike(barraCircular.qtdMarchas(), barraCircular.tipoFreio(), barraCircular.marca(),
                barraCircular.modelo(), barraCircular.marca(), barraCircular.velocidade());

        printBike(bicicletaEstrada.qtdMarchas(), bicicletaEstrada.tipoFreio(), bicicletaEstrada.marca(),
                bicicletaEstrada.modelo(), bicicletaEstrada.material(), bicicletaEstrada.velocidade());

        printBike(offRoad.qtdMarchas(), offRoad.tipoFreio(), offRoad.marca(),
                offRoad.modelo(), offRoad.marca(), offRoad.velocidade());

        printBike(profissional.qtdMarchas(), profissional.tipoFreio(), profissional.marca(),
                profissional.modelo(), profissional.marca(), profissional.velocidade());

    }

    public static void printBike(int qtdMachas, String tipoFreio, String marca, String modelo,
                          String material, String velocidade){

        System.out.println("Dados da bicicleta: \nQuantidade de marchas: " + qtdMachas +
                "\nTipo de Freio: " + tipoFreio + "\nMarca: " + marca + "\nModelo: " + modelo +
                "\nMaterial: " + material + "\nVelocidade: " + velocidade + "\n");

    }

}
