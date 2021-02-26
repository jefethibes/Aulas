function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        document.getElementById("txtResultado").value = "Temperatura inválida!";
    } else{
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var celcius = 5 * (v1 - 32) / 9;
        document.getElementById("txtResultado").value = "Cº = " + celcius;
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseFloat(document.getElementById("txtValor1").value);
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtResultado").value = "";
}