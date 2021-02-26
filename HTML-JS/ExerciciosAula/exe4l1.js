function resposta(){
    if(validarCamposVazios() == true && validaN() == true){
        var valor1 = document.getElementById("txtValor1").value;
        var valor2 = parseInt(document.getElementById("txtValor2").value);
        var a = [];
        for(i = 0; i < valor2; i++){
            a.push(valor1);
        }
        window.alert(a);
    }
}

function validarCamposVazios(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    if(v1.value == "" || v1.value.trim().length == 0){
        alert("Campo não pode estar vazio!");
    } else if(v2.value == "" || v2.value.trim().length == 0){
        alert("Campo não pode estar vazio!");
    } else{
        return true;
    }
}

function validaN(){
    var v2 = document.getElementById("txtValor2").value;
    if(isNaN(v2)){
        alert("Campo só pode ser preenchido por números!");
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
}