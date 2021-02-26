function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        alert("Valor inválido!");
    } else{
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var v3 = parseFloat(document.getElementById("txtValor3").value);
        var v4 = parseFloat(document.getElementById("txtValor4").value);
        var v5 = parseFloat(document.getElementById("txtValor5").value);
        alert(v1 + "² = " + v1*v1);
        alert(v2 + "² = " + v2*v2);
        alert(v3 + "² = " + v3*v3);
        alert(v4 + "² = " + v4*v4);
        alert(v5 + "² = " + v5*v5);
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    var v3 = document.getElementById("txtValor3");
    var v4 = document.getElementById("txtValor4");
    var v5 = document.getElementById("txtValor5");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().lenght == 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else if(v3.value == "" || v3.value.trim().lenght == 0){
        document.getElementById("txtValor3").focus();
        return false;
    } else if(v4.value == "" || v4.value.trim().lenght == 0){
        document.getElementById("txtValor4").focus();
        return false;
    } else if(v5.value == "" || v5.value.trim().lenght == 0){
        document.getElementById("txtValor5").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseFloat(document.getElementById("txtValor1").value);
    var v2 = parseFloat(document.getElementById("txtValor2").value);
    var v3 = parseFloat(document.getElementById("txtValor3").value);
    var v4 = parseFloat(document.getElementById("txtValor4").value);
    var v5 = parseFloat(document.getElementById("txtValor5").value);
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(v2)){
        document.getElementById("txtValor2").focus();
        return false;
    } else if(isNaN(v3)){
        document.getElementById("txtValor3").focus();
        return false;
    } else if(isNaN(v4)){
        document.getElementById("txtValor4").focus();
        return false;
    } else if(isNaN(v5)){
        document.getElementById("txtValor5").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtValor3").value = "";
    document.getElementById("txtValor4").value = "";
    document.getElementById("txtValor5").value = "";
}