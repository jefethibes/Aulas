function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        document.getElementById("txtMedia").value = "Valor inválido!";
    } else if(validaCamposNeg() == false){
        document.getElementById("txtMedia").value = "Digite apenas notas de 0 a 10!";
    } else{
        var n1 = parseFloat(document.getElementById("txtN1").value);
        var n2 = parseFloat(document.getElementById("txtN2").value);
        var n3 = parseFloat(document.getElementById("txtN3").value);
        var nome = document.getElementsByName("txtNome").value;
        var media = (n1 + n2 + n3) / 3;
        if(media >= 7){
            document.getElementById("txtMedia").value = "Aluno: " + nome + ", Média: " + media + ", Aprovado!"
        } else{
            document.getElementById("txtMedia").value = "Aluno: " + nome + ", Média: " + media + ", Reprovado!"
        }
    }
}

function validaCamposVazios(){
    var n1 = document.getElementById("txtN1");
    var n2 = document.getElementById("txtN2");
    var n3 = document.getElementById("txtN3");
    var nome = document.getElementById("txtNome");
    if(n1.value == "" || n1.value.trim().lenght == 0){
        document.getElementById("txtN1").focus();
        return false;
    } else if(n2.value == "" || n2.value.trim().lenght == 0){
        document.getElementById("txtN2").focus();
        return false;
    } else if(n3.value == "" || n3.value.trim().lenght == 0){
        document.getElementById("txtN3").focus();
        return false;
    } else if(nome.value == "" || nome.value.trim().lenght == 0){
        document.getElementById("txtNome").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNum(){
    var n1 = parseFloat(document.getElementById("txtN1").value);
    var n2 = parseFloat(document.getElementById("txtN2").value);
    var n3 = parseFloat(document.getElementById("txtN3").value);
    if(isNaN(n1)){
        document.getElementById("txtN1").focus();
        return false;
    } else if(isNaN(n2)){
        document.getElementById("txtN2").focus();
        return false;
    } else if(isNaN(n3)){
        document.getElementById("txtN3").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNeg(){
    var n1 = document.getElementById("txtN1").value;
    var n2 = document.getElementById("txtN2").value;
    var n3 = document.getElementById("txtN3").value;
    if(n1 < 0|| n1 > 10){
        document.getElementById("txtN1").focus();
        return false;
    } else if(n2 < 0 || n2 > 10){
        document.getElementById("txtN2").focus();
        return false;
    } else if(n3 < 0 || n3 > 10){
        document.getElementById("txtN3").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtNome").value = "";
    document.getElementById("txtN1").value = "";
    document.getElementById("txtN2").value = "";
    document.getElementById("txtN3").value = "";
    document.getElementById("txtMedia").value = "";
}