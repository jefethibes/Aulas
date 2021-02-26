package Exercicio1;

/*Crie uma classe chamada UF que terá os seguintes atributos: codigo, nome, sigla
(Não esqueça de criar os métodos get e set).
Crie uma classe chamada Cidade que terá os seguintes atributos: codigo, nome e estado
(que será do tipo UF e não do tipo String).
Cria uma classe chamada Empresa, onde terá os seguintes atributos:
nome, endereco, fone, Cidade (que será do tipo Cidade).
Crie uma classe chamada CriaEmpresa e crie duas empresas, sete para ela as informações de estado,
cidade e as informações da empresa. Mostre na console todos os atributos contidos nas empresas criadas,
desde o nome da empresa ate o estado que ela fica.*/

public class CriaEmpresa {

    public static void main(String args[]){

        UF uf = new UF();

        uf.setCodigo("41");
        uf.setNome("Santa e bela Catarina");
        uf.setSigla("SC");

        Cidade cidade = new Cidade();

        cidade.setCodigo("48");
        cidade.setNome("Floripa");
        cidade.setUf(uf);

        Empresa empresa1 = new Empresa();

        empresa1.setNome("Coca-Cola");
        empresa1.setEnrdereco("SC 401");
        empresa1.setFone("48 999999999");
        empresa1.setCidade(cidade);
        empresa1.printaEmpresa();

        Empresa empresa2 = new Empresa();

        empresa2.setNome("Ambev");
        empresa2.setEnrdereco("BR 101");
        empresa2.setFone("48 888888888");
        empresa2.setCidade(cidade);
        empresa2.printaEmpresa();

    }

}
