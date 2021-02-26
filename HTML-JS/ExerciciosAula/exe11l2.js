function resposta(){
    if(validaCamposVazios() == false || validaCamposNum() == false){
        alert("Valor inválido!");
    } else if(validaCamposNeg() == false){
        alert("Digite a altura em centimetros de 50cm a 220cm");
    } else{
        var s1 = document.getElementsByName("sexo1");
        var s2 = document.getElementsByName("sexo2");
        var s3 = document.getElementsByName("sexo3");
        var s4 = document.getElementsByName("sexo4");
        var s5 = document.getElementsByName("sexo5");
        var vet = [];
        var conM = 0;
        var conF = 0;
        for (var i = 0; i < s1.length; i++) {
            if (s1[i].checked) {
                vet.push(s1[i].value);
            }
            if(s2[i].checked) {
                vet.push(s2[i].value);
            }
            if(s3[i].checked) {
                vet.push(s3[i].value);
            }
            if(s4[i].checked) {
                vet.push(s4[i].value);
            }
            if(s5[i].checked) {
                vet.push(s5[i].value);
            }
        }

        for(i = 0; i < 5; i++){
            if(vet[i] == "Masculino"){
                conM = conM + 1;
            } else{
                conF = conF + 1;
            }
        }
        alert(conM + " Homens");
        alert(conF + " Mulheres")
    }
}

function validaCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v3 = document.getElementById("txtValor3");
    var v5 = document.getElementById("txtValor5");
    var v7 = document.getElementById("txtValor7");
    var v9 = document.getElementById("txtValor9");
    if(v1.value == "" || v1.value.trim().lenght == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v3.value == "" || v3.value.trim().lenght == 0){
        document.getElementById("txtValor3").focus();
        return false;
    } else if(v5.value == "" || v5.value.trim().lenght == 0){
        document.getElementById("txtValor5").focus();
        return false;
    } else if(v7.value == "" || v7.value.trim().lenght == 0){
        document.getElementById("txtValor7").focus();
        return false;
    } else if(v9.value == "" || v9.value.trim().lenght == 0){
        document.getElementById("txtValor9").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNum(){
    var v1 = parseFloat(document.getElementById("txtValor1").value);
    var v3 = parseFloat(document.getElementById("txtValor3").value);
    var v5 = parseFloat(document.getElementById("txtValor5").value);
    var v7 = parseFloat(document.getElementById("txtValor7").value);
    var v9 = parseFloat(document.getElementById("txtValor9").value);
    if(isNaN(v1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(v3)){
        document.getElementById("txtValor3").focus();
        return false;
    } else if(isNaN(v5)){
        document.getElementById("txtValor5").focus();
        return false;
    } else if(isNaN(v7)){
        document.getElementById("txtValor7").focus();
        return false;
    } else if(isNaN(v9)){
        document.getElementById("txtValor9").focus();
        return false;
    } else{
        return true;
    }
}

function validaCamposNeg(){
    var v1 = document.getElementById("txtValor1").value;
    var v3 = document.getElementById("txtValor3").value;
    var v5 = document.getElementById("txtValor5").value;
    var v7 = document.getElementById("txtValor7").value;
    var v9 = document.getElementById("txtValor9").value;
    if(v1 < 50 || v1 > 220){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v3 < 50 || v3 > 220){
        document.getElementById("txtValor3").focus();
        return false;
    } else if(v5 < 50 || v5 > 220){
        document.getElementById("txtValor5").focus();
        return false;
    } else if(v7 < 50 || v7 > 220){
        document.getElementById("txtValor7").focus();
        return false;
    } else if(v9 < 50 || v9 > 220){
        document.getElementById("txtValor9").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor3").value = "";
    document.getElementById("txtValor5").value = "";
    document.getElementById("txtValor7").value = "";
    document.getElementById("txtValor9").value = "";
}