function resposta(){
    if(validaCamposVazios() == false || validaNumeros() == false){
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else{
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var aumento = v2 + ((v2 / 100) * 10);
        document.getElementById("txtResultado").value = "Novo salário: R$ " + aumento;
    }
}

function validaCamposVazios(){
    var v2 = document.getElementById("txtValor2");
    if(v2.value == "" || v2.value.trim().lenght == 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function validaNumeros(){
    var v2 = document.getElementById("txtValor2").value;
    if(isNaN(v2) || v2 < 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
}