function resposta(){
    if(validarCamposVazios() == true && validaN() == true){
        var v1 = parseFloat(document.getElementById("txtValor1").value);
        var v2 = parseFloat(document.getElementById("txtValor2").value);
        var v3 = parseFloat(document.getElementById("txtValor3").value);
        if((v1 == v2) && (v1 == v3)){
            document.getElementById("txtResultado").value = "Triângulo equilátero: possui os três lados com medidas iguais!"
        } else if((v1 == v2 && v1 != v3) || (v1 != v2 && v1 == v3) || (v1 != v2 && v2 == v3)){
            document.getElementById("txtResultado").value = "Triângulo isósceles: possui dois lados com medidas iguais!";
        } else{
            document.getElementById("txtResultado").value = "Triângulo escaleno: possui os três lados com medidas diferentes";
        }
    }
}

function validarCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    var v3 = document.getElementById("txtValor3");
    if(v1.value == "" || v1.value.trim().length == 0){
        alert("Campo não pode estar vazio!");
    } else if(v2.value == "" || v2.value.trim().length == 0){
        alert("Campo não pode estar vazio!");
    } else if(v3.value == "" || v3.value.trim().length == 0){
        alert("Campo não pode estar vazio!");
    }else{
        return true;
    }
}

function validaN(){
    var v1 = document.getElementById("txtValor1").value;
    var v2 = document.getElementById("txtValor2").value;
    var v3 = document.getElementById("txtValor3").value;
    if(isNaN(v1)){
        alert("Campo só pode ser preenchido por números!");
    } else if(isNaN(v2)){
        alert("Campo só pode ser preenchido por números!");
    } else if(isNaN(v3)){
        alert("Campo só pode ser preenchido por números!");
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtValor3").value = "";
    document.getElementById("txtResultado").value = "";
}