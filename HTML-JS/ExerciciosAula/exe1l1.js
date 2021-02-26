function resposta(){
    if (document.getElementById("txtValor").value == "") {
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else if(validarNumero() == false){
        document.getElementById("txtResultado").value = "Valor inválido!";
    } else if(parseFloat(document.getElementById("txtValor").value) == "10"){
        document.getElementById("txtResultado").value = "Valor igual a 10!";
    } else if(parseFloat(document.getElementById("txtValor").value) >= "10"){
        document.getElementById("txtResultado").value = "Valor maior que 10!";
    } else if(parseFloat(document.getElementById("txtValor").value) <= "10"){
        document.getElementById("txtResultado").value = "Valor menor que 10!";
    } 
}

function validarNumero() {
    var valor = document.getElementById("txtValor").value;
    if (isNaN(valor)) {
        document.getElementById("txtValor").focus();
        return false;
    } else if (Number(valor) == false) {
        document.getElementById("txtValor").focus();
        return false;
    } else {
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor").value = "";
    document.getElementById("txtResultado").value = "";
}