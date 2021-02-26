package Exercicio2;

/*Crie uma classe chamada Cor que terá os seguintes atributos: (int) codigo e (String) nome;
Crie uma classe chamada Fabricante que terá os seguintes atributos: (int) codigo, (String) nome,
(Cidade) cidade (reaproveite as classes Cidade e UF dos exercícios acima) e (String) telefone.
Crie uma classe chamada Produto que terá os seguintes atributos: (int) codigo, (String) nome, (Cor) cor,
(Fabricante) fabricante e (double) valor.
Crie uma classe chamada CriaProduto e no método main crie um produto. Atribua valores ao produto
e mostre-os na Console via System.out.println(). Você deve setar todos os atributos.*/

import Exercicio1.Cidade;
import Exercicio1.UF;

public class CriaProduto {

    public static void main(String args[]){

        UFEx2 uf = new UFEx2();

        uf.setCodigo("88");
        uf.setNome("São Paulo");
        uf.setSigla("SP");

        CidadeEx2 cidade = new CidadeEx2();

        cidade.setCodigo("90");
        cidade.setNome("São Paulo");
        cidade.setUf(uf);

        Cor cor = new Cor();

        cor.setCodigo(25);
        cor.setNome("Roxo");

        Fabricante fabricante = new Fabricante();

        fabricante.setNome("Agricultor");
        fabricante.setCodigo(1);
        fabricante.setFone("48 999999999");
        fabricante.setCidade(cidade);

        Produto produto = new Produto();

        produto.setCodigo(555);
        produto.setNome("Suco de uva");
        produto.setFabricante(fabricante);
        produto.setCor(cor);
        produto.setValor(25.00);

        produto.printaProduto();
        produto.getCor().printaCor();
        produto.getFabricante().printaFabricante();
        produto.getFabricante().getCidade().printaCidade();
        produto.getFabricante().getCidade().getUf().printaUf();

    }

}
