function resposta(){
    if(validarCamposVazios() == true && validaN() == true && validaNumNega() == true){
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var resultado;
        var resulFinal;
        resultado = v1 * v2;
        if(v1 > 200){
            resulFinal = resultado + ((resultado / 100) * 50);
            document.getElementById("txtResultado").value = "Valor R$ " + resulFinal;
        } else if(v1 > 100){
            resulFinal = resultado + ((resultado / 100) * 25);
            document.getElementById("txtResultado").value = "Valor R$ " + resulFinal;
        } else{
            document.getElementById("txtResultado").value = "Valor R$ " + resultado;
        }
    } else{
        document.getElementById("txtResultado").value = "Valor inválido!"
    }
}

function validarCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    if(v1.value == "" || v1.value.trim().length == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().length == 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function validaN(){
    var v1 = document.getElementById("txtValor1").value;
    var v2 = document.getElementById("txtValor2").value;
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(v2)){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function validaNumNega(){
    var v1 = document.getElementById("txtValor1").value;
    var v2 = document.getElementById("txtValor2").value;
    if(v1 < 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2 < 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtResultado").value = "";
}