function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false || validaCamposNeg() == false){
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else{
        var v1 = parseInt(document.getElementById("txtValor1").value);
        for(i = 0; i < 11; i++){
            alert(v1 + " * " + i + " = " + v1 * i);
        }
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

function validaCamposNeg(){
    var v1 = document.getElementById("txtValor1").value;
    if(v1 < 0){
        document.getElementById("txtValor1").focus();
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