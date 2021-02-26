function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false || validaCamposNeg() == false){
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else{
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var desc = v1 - ((v1 / 100) * v2);
        document.getElementById("txtResultado").value = "Valor = R$ " + desc;
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().lenght == 0){
        document.getElementById("txtValor2").focus();
        return false;
    }else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseFloat(document.getElementById("txtValor1").value);
    var v2 = parseFloat(document.getElementById("txtValor2").value);
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(v2)){
        document.getElementById("txtValor2").focus();
        return false;
    }else{
        return true;
    }
}

function validaCamposNeg(){
    var v1 = document.getElementById("txtValor1").value;
    var v2 = document.getElementById("txtValor2").value;
    if(v1 < 1){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2 < 0 || v2 > 100){
        document.getElementById("txtValor2").focus();
        return false;
    }else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtResultado").value = "";
}