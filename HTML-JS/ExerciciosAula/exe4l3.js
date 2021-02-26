function copiarValor() {
    var valor = document.getElementById("txtValor");
    var valorCopia = document.getElementById("txtValorCopia");
    if (validarDados() == true) {
        valorCopia.value = valor.value;
    }
}

function validarDados() {
    var campo = document.getElementById("txtValor");
    if (campo.value == "" || campo.value.trim().length == 0) {
        alert("Campo vazio!");
    } else if(isNaN(parseFloat(document.getElementById("txtValor").value))){
        alert("Valor inválido! Digite apenas números!");
    }else {
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor").value = "";
    document.getElementById("txtValorCopia").value = "";
}