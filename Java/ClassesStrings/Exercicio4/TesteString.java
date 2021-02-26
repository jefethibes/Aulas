package Exercicio4;

/*4 – Exercício sobre a Classe String.  Deve-se criar uma classe chamada TesteString.
Após criar a classe é preciso criar o método main. Dentro deste método, criar uma variável
do tipo String que receberá como valor o seguinte nome: Brasil, por exemplo: String pais = “Brasil”;
Logo após deve-se chamar o método charAt(0) da classe String e dar um System.out.println() neste método
(por ex: System.out.println(pais.charAt(0));. Feito isto, agora deve-se chamar o método toUpperCase() e
mostrar o resultado novamente.
Depois,  criar uma nova String de nome pais2 e dar o valor Pais de Gales a ela com um espaço em
branco na frente e outro atrás da variável. Ex: String pais2 = “ Pais de Gales “; (Não esquecer de
colocar os espaços em branco na frente e atrás da variável). Logo, após chamar o método trim() nesta
variável e mostrar o resultado na console. Em seguida, chamar o método length() na variável pais2 e
mostrar o resultado. Para finalizar, deve-se chamar o método substring() na variável pais2 com os dois
parâmetros sendo preenchidos com os valores (0,5). Mostrar o resultado na console.*/


public class TesteString {

    public static void main(String args[]){

        String pais = "Brasil";
        String pais2 = " País de Gales ";

        System.out.println(pais.charAt(2));
        System.out.println(pais.toUpperCase());
        System.out.println(pais2.trim());
        System.out.println(pais2.length());
        System.out.println(pais2.substring(0, 5));

    }

}
