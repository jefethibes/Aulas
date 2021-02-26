function resposta(){
    if(validaValores() == false){
        document.getElementById("txtResultado").value = "Valor inválido!"
    } else{
        return soma();
    }
}

function validaValores(){
    var valor1 = document.getElementById("txtValor1").value
    var valor2 = document.getElementById("txtValor2").value
    if(isNaN(valor1)){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(isNaN(valor2)){
        document.getElementById("txtValor2").focus();
        return false;
     } else if(Number(valor1) == false){
        document.getElementById("txtValor2").focus();
        return false;
     } else if(Number(valor2) == false){
        document.getElementById("txtValor2").focus();
        return false;
     } else{
         return true;
     }
}

function soma(){
    var valor1 = parseFloat(document.getElementById("txtValor1").value);
    var valor2 = parseFloat(document.getElementById("txtValor2").value);
    var resultado = valor1 + valor2;
    document.getElementById("txtResultado").value = resultado;
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtResultado").value = "";
}