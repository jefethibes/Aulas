function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        alert("Valor inválido!");
    } else{
        var v1 = parseFloat(document.getElementById("txtN1").value);
        var v2 = parseFloat(document.getElementById("txtN2").value);
        var op = document.getElementsByName("op");
        var resultado;
        var operacao;
        for(var i = 0; i < op.length; i++){
            if(op[i].checked){
                operacao = op[i].value;
            }
        }

        if(operacao == "somar"){
            resultado = v1 + v2;
            document.getElementById("txtResultado").value = resultado;
        } else if(operacao == "subtrair"){
            resultado = v1 - v2;
            document.getElementById("txtResultado").value = resultado;
        } else if(operacao == "multiplicar"){
            resultado = v1 * v2;
            document.getElementById("txtResultado").value = resultado;
        } else{
            resultado = v1 / v2;
            document.getElementById("txtResultado").value = resultado;
        }        
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtN1");
    var v2 = document.getElementById("txtN2");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtN1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().lenght == 0){
        document.getElementById("txtN2").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseFloat(document.getElementById("txtN1").value);
    var v2 = parseFloat(document.getElementById("txtN2").value);
    if(isNaN(v1)){
        document.getElementById("txtN1").focus();
        return false;
    } else if(isNaN(v2)){
        document.getElementById("txtN2").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtN1").value = "";
    document.getElementById("txtN2").value = "";
    document.getElementById("txtResultado").value = "";
}