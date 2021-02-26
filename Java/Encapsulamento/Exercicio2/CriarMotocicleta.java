package Exercicio2;

/*2 – Crie uma classe chamada Motocicleta que terá os seguintes atributos:
marca, fabricante, ano e freioDisco (boolean).
Você deverá criar os métodos get e set de cada atributo.
Crie outra classe chamada CriarMotocicleta. Crie duas motocicletas,
sete os valores e mostre os valores setados em uma janela (JOptionPane).*/

public class CriarMotocicleta {

    public static void main(String args[]){

        Motocicleta motocicleta = new Motocicleta();
        Motocicleta motocicleta1 = new Motocicleta();

        motocicleta.setMarca("CB500");
        motocicleta.setFabricante("Honda");
        motocicleta.setAno(2020);
        motocicleta.setFreioDisco(true);

        motocicleta1.setMarca("YBR");
        motocicleta1.setFabricante("Yamaha");
        motocicleta1.setAno(2005);
        motocicleta1.setFreioDisco(false);

        motocicleta.printMotocicleta();
        motocicleta1.printMotocicleta();
    }

}
