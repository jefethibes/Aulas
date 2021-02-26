package Exercicio2;

/*Crie uma classe chamada Calculadora e crie seis métodos utilitários,
(soma, subtração, divisão, multiplicação, raiz quadrada e resto da divisão).
Chame todos os métodos utilitários.*/

public class Calculadora {

    public static void main(String args[]){

        System.out.println("2 + 2= " + soma(2, 2));
        System.out.println("3 - 2= " + subtracao(3, 2));
        System.out.println("10 / 2= " + divisao(10, 2));
        System.out.println("5 x 10= " + mult(5, 10));
        System.out.println("Raiz de 50= " + raiz(50));
        System.out.println("Resto 15 / 2= " + resto(15, 2));

    }

    public static double soma(double a, double b){
        return a + b;
    }

    public static double subtracao(double a, double b){
        return a - b;
    }

    public static double divisao(double a, double b){
        return a / b;
    }

    public static double mult(double a, double b){
        return  a * b;
    }

    public static double raiz(double a){
        return Math.sqrt(a);
    }

    public static double resto(double a, double b){
        return a % b;
    }

}
