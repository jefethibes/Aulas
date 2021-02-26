function resposta(){
    if(validaCampoVazio() == false){
        alert("Não é um senha válida!");
    } else{
        var v1 = document.getElementById("txtValor1").value;
        var v2 = document.getElementById("txtValor2").value;
        if(v1 == v2){
            alert("Senha validada com sucesso!");
        } else{
            alert("Senha inválida!");
        }
    }
}

function validaCampoVazio(){
    var v1 = document.getElementById("txtValor1");
    var v2 = document.getElementById("txtValor2");
    if(v1.value == "" || v1.value.trim().length == 0){
        document.getElementById("txtValor1").focus();
        return false;
    } else if(v2.value == "" || v2.value.trim().length == 0){
        document.getElementById("txtValor2").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
}