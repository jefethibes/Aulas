package Exercicio1;

/*Crie uma classe chamada Funcionario. Nesta classe você deve criar os seguintes atributos: nome, salario.
Você deve criar um método chamado bonificação que retorna um valor de bônus igual a 0 (zero) .
Depois crie uma classe que estenda de Funcionario chamada de Gerente que também terá um método
chamado bonificação, dando qualquer valor para a bonificação para o Gerente.
Depois crie uma classe chamada Secretario que estenda de Funcionario, mas não sobrescreva o método bonificação.
Para finalizar crie uma classe que acessa as duas classes estendidas e chame os métodos bonificação para
o Secretario e para Gerente. No caso do Gerente some mais o atributo salario e mostre os resultados.
Na classe que contém o método main, tente chamar método bonificação da classe Funcionario a partir da
classe Gerente.
Crie um método chamado piso salarial na classe Funcionario que terá que retorna o valor 1000 e
será marcado com o modificador protected. Já na classe Gerente sobrescreva o método piso salarial que
terá o modificador default e que retornará 3000.
Na classe Secretario você deverá criar um método piso salarial que terá o modificador private e
retornará o valor 1200.*/

public class Main {

    public static void main(String args[]){

        Gerente gerente = new Gerente();
        Secretario secretario = new Secretario();

        gerente.setNome("Jeferson");
        gerente.setSalario(2000);

        secretario.setNome("João");
        secretario.setSalario(200);

        gerente.listaDados();
        secretario.listaDados();

    }

}
