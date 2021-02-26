function resposta(){
    var soma = 0;
    var vet = [];
    var cont = 0;
    var aux = 0;

    while(cont < 50){
        vet.push(soma);
        cont += 1;
        soma = soma + 2;
    }
    for(i = 0; i < vet.length; i++){
        aux = aux + vet[i];
    }
    document.getElementById("txtResultado").value = "A soma dos 50 primeiros números pares é: " + aux;
}

function limpar(){
    document.getElementById("txtResultado").value = "";
}