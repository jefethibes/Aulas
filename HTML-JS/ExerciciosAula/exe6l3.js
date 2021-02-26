function resposta(){
    if(validaCampoVazio() == false){
        alert("Não é um senha válida!");
    } else{
        var v1 = document.getElementById("txtValor1");
        if(v1.value.trim().length < 3){
            alert("Senha fraca!");
        } else if(v1.value.trim().length >= 3 && v1.value.trim().length <= 5){
            alert("Senha média!");
        } else{
            alert("Senha forte!");
        }
    }
}

function validaCampoVazio(){
    var v1 = document.getElementById("txtValor1");
    if(v1.value == "" || v1.value.trim().length == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
}