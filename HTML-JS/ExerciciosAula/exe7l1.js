function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else{
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var v3 = parseFloat(document.getElementById("txtValor3").value);
        var delta = (v2*v2)+(-4*v1*v3);
        if(delta < 0){
            document.getElementById("txtResultado").value = "Delta " + delta + ", a equação não possui raízes reais."
        } else if(delta == 0){
            document.getElementById("txtResultado").value = "Delta " + delta + ", a equação terá duas raízes idênticas."
        } else{
            document.getElementById("txtResultado").value = "Delta " + delta + ", a equação terá duas raízes distintas."
        }
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    var v3 = document.getElementById("txtValor3");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().lenght == 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else if(v3.value == "" || v3.value.trim().lenght == 0){
        document.getElementById("txtValor3").focus();
        return false;
    }else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseInt(document.getElementById("txtValor1").value);
    var v2 = parseInt(document.getElementById("txtValor2").value);
    var v3 = parseInt(document.getElementById("txtValor3").value);
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(v2)){
        document.getElementById("txtValor2").focus();
        return false;
    } else if(isNaN(v3)){
        document.getElementById("txtValor3").focus();
        return false
    }else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtValor3").value = "";
    document.getElementById("txtResultado").value = "";
}