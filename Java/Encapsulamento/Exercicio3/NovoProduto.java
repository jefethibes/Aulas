package Exercicio3;

/*3 – Crie uma classe chamada Produto que terá os seguintes atributos: codigo, nome, valor.
Gere os métodos get e set de cada atributo.
Crie uma classe que você terá que digitar o código, o nome e o valor do produto.
Você deverá criar dois produtos, digitar as descrições, setar os valores utilizando
o método set e no final mostrar esses produtos.*/

import java.util.Scanner;

public class NovoProduto {

    public static void main(String args[]){

        Scanner inp = new Scanner(System.in);

        for(int i = 0; i < 2; i++){

            Produto produto = new Produto();

            System.out.println("Digite as informações do produto: ");
            System.out.println("Código: ");
            int novoCodigo = inp.nextInt();

            System.out.println("Nome: ");
            String novoNome = inp.next();

            System.out.println("Valor: R$ ");
            double novoValor = inp.nextDouble();

            produto.setCodigo(novoCodigo);
            produto.setNome(novoNome);
            produto.setValor(novoValor);

            produto.printProduto();

        }

    }

}
