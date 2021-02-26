package Exercicio2;

/*2 – Criar uma classe chamada Livro que terá os seguintes atributos:
titulo, edicao, genero, anoPublicacao, autor, qtdPaginas.
Deve ser criado outra classe chamada DadosLivro, onde esta
classe terá o método main. Logo após, deve-se criar uma instância da classe Livro,
do mesmo jeito que foi feito no exercício anterior. Em seguida, serão preenchidos
os valores das variáveis de todos os atributos inseridos da classe Livro.
Para finalizar devem-se mostrar os valores inseridos nas variáveis na console da sua IDE.
*/

public class DadosLivro {

    public static void main(String args[]){

        Livros livros = new Livros();

        livros.titulo = "As aventuras de pinóquio";
        livros.anoPublicacao = 2010;
        livros.autor = "Jeferson Roberto";
        livros.edicao = "1ª Edição";
        livros.genero = "Infantil";
        livros.qtdPaginas = 20;

        System.out.println("Descrição do livro:" + "\nTítulo: " + livros.titulo + "\nAno da Publicação: " + livros.anoPublicacao +
                "\nAutor: " + livros.autor + "\nEdição: " + livros.edicao + "\nGenero: " + livros.genero +
                "\nNúmero Páginas: " + livros.qtdPaginas);

    }

}
