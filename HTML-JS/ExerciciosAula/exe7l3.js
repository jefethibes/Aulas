function validaDia(){
    var dia = parseInt(document.getElementById("txtDia").value);
    var valDia = document.getElementById("txtDiaCorreto");
 
    if(dia < 31 && dia > 0){
        valDia.value = dia;
        return true;
    } else{
        valDia.value = "Dia inválido!";
        return false;
    }

}

function validaMes(){
    var mes = parseInt(document.getElementById("txtMes").value);
    var valMes = document.getElementById("txtMesCorreto");

    if(mes < 13 && mes > 0){
        valMes.value = mes;
    } else{
        valMes.value = "Mês inválido!";
    }
}

function validaAno(){
    var ano = parseInt(document.getElementById("txtAno").value);
    var valAno = document.getElementById("txtAnoCorreto");

    if(ano > 1949){
        valAno.value = ano;
    } else{
        valAno.value = "Ano inválido!";
    }
}

function validaCamposVazios(){
    var dia = document.getElementById("txtDia");
    var mes = document.getElementById("txtMes");
    var ano = document.getElementById("txtAno");
    if(dia.value == "" || dia.value.trim().length == 0){
        document.getElementById("txtDia").focus();
        return false;
    } else if(mes.value == "" || mes.value.trim().length == 0){
        document.getElementById("txtMes").focus();
        return false;
    } else if(ano.value == "" || ano.value.trim().length == 0){
        document.getElementById("txtAno").focus();
        return false;
    } else{
        return true;
    }
}

function limpar(){
    document.getElementById("txtDia").value = "";
    document.getElementById("txtMes").value = "";
    document.getElementById("txtAno").value = "";
}