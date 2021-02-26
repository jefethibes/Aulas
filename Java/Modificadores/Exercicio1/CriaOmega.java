package Exercicio1;

/*Crie outra classe que estenda a classe Carro chamada Omega. Veja o que vai acontecer se você tentar estender
a classe Carro. Se algo de errado acontecer, veja as regras vistas no início da aula sobre classes finais.
Logo após tente sobrescrever o método qtdPortas() retornando o valor 4; Novamente veja o que vai acontecer
e veja a regra de métodos finais. Veja bem que quando você não quer que um método seja sobrescrito você deve
marcá-lo como final, que pode ser o caso de qtdRodas() já que todo Carro tem quatro rodas. Mas como há Carros
com 2 ou 4 portas você terá que sobrescrever o método qtdPortas(). Veja o que você deve fazer para conseguir
sobrescrever. Na classe Omega crie mais dois métodos que retornarão a marca e o modelo do carro.
Depois crie uma classe chamada Utilitario onde você colocará um método static chamado data que
mostrará a data do dia e outro método static que será chamado de hora que mostrará a hora do dia.
Se isso for muito difícil para você, olhe nos exemplos no final do material desta aula.
Por fim crie uma classe AcessaOmega que terá o método main, você deve mostrar todos os métodos da classe
Omega e ainda chamar os métodos da classe Utilitario e mostrar os resultados.*/


public class CriaOmega {

    public static void main(String args[]){

        Omega omega = new Omega();

        System.out.println("Quantidade de rodas: " + omega.qtdRodas() + "\nQuantidade de portas: " +
                omega.qtdPortas() + "\nData: " + Utilitarios.data() + "\nHoras: " + Utilitarios.horas());

    }

}
