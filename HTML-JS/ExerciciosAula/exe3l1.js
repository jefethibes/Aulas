function resposta(){
    if(validaValores() == false){
        document.getElementById("txtResultado").value = "Valor inválido!"
    } else{
        var valor1 = parseFloat(document.getElementById("txtValor1").value);
        var valor2 = parseFloat(document.getElementById("txtValor2").value);

        switch(document.getElementById("operacao").value){
            case "soma" :
                var resultado = valor1 + valor2;
                document.getElementById("txtResultado").value = resultado;
                break;
            
            case "sub" :
                var resultado = valor1 - valor2;
                document.getElementById("txtResultado").value = resultado;
                break;
            
            case "mult" :
                var resultado = valor1 * valor2;
                document.getElementById("txtResultado").value = resultado;
                break;
            
            case "div":
                var resultado = valor1 / valor2;
                document.getElementById("txtResultado").value = resultado;
                break;
        }
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
        document.getElementById("txtValor1").focus();
        return false;
     } else if(Number(valor2) == false){
        document.getElementById("txtValor2").focus();
        return false;
     } else{
         return true;
     }
}

function limpar(){
    document.getElementById("txtValor1").value = "";
    document.getElementById("txtValor2").value = "";
    document.getElementById("txtResultado").value = "";
}