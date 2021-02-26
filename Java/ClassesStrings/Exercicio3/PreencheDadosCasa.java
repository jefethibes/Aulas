package Exercicio3;

/*3 – Criar uma classe chamada Casa que terá os seguintes atributos:
qtdQuartos, cor, qtdAndares, qtdGaragens, qtdBanheiro, valorImovel, bairro, rua, numero.
Deve ser criado outra classe chamada PreencheDadosCasa, onde a mesma terá o método main.
Após criado o método main, deve-se criar uma instância da classe Casa, por meio do operador new.
Em seguida, preencher os valores de cada variável por meio da instância seguida do operador ponto (.).
Para finalizar, devem-se mostrar os valores na tela da console do Netbeans.
*/

public class PreencheDadosCasa {

    public static void main(String args[]){

        Casa casa = new Casa();

        casa.bairro = "Rio Vermelho";
        casa.rua = "Rua dos coquinhos";
        casa.cor = "Azul";
        casa.numero = 5620;
        casa.qtdAndares = 0;
        casa.qtdBanheiros = 2;
        casa.qtdGaragens = 2;
        casa.qtdQuartos = 4;
        casa.valorImovel = 149999.99;

        System.out.println("Especificações da casa:" + "\nBairro: " + casa.bairro + "\nRua: " + casa.rua +
                "\nCor: " + casa.cor + "\nNúmero: " + casa.numero + "\nAndares: " + casa.qtdAndares +
                "\nBanheiros: " + casa.qtdBanheiros + "\nGaragens: " + casa.qtdGaragens + "\nQuartos: " +
                casa.qtdQuartos + "\nValor: R$ " + casa.valorImovel);

    }

}
