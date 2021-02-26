var corCompleta = "#99ff8f"
var corIncompleta = "#eff70b"

function enviar(){
	if(camposVazios() == true && campoSexo() == true && campoInte() == true){
		alert("Cadastro efetuado com sucesso!");
	}
}

function campoSexo(){
	var sexo = document.getElementsByName("sexo");
	for(i = 0; i < sexo.length; i++){
		if(sexo[i].checked){
			return true
		}
	}
	alert("Campo sexo não selecionado!");
}

function campoInte(){
	var interesse = document.getElementsByName("inte");
	for(i = 0; i < interesse.length; i++){
		if(interesse[i].checked){
			return true;
		}
	}
	alert("Por favor selecione um curso de interesse!");
}

function camposVazios(){
	var nome = document.getElementById("nome");
	var cpf= document.getElementById("cpf");
	var rg = document.getElementById("rg");
	var email = document.getElementById("email");
	var cel = document.getElementById("cel");
	var cep = document.getElementById("cep");
	var endereco = document.getElementById("endereco");
	if(nome.value == "" || nome.value.trim().length == 0){
		document.getElementById("nome").focus();
		alert("Campo nome não pode estar vazio!");
	} else if(cpf.value == "" || cpf.value.trim().length != 14){
		document.getElementById("cpf").focus();
		alert("Cpf inválido!");
	} else if(rg.value == "" || rg.value.trim().length != 9){
		document.getElementById("rg").focus();
		alert("RG inválido!");
	} else if(email.value == "" || email.value.trim().lenght == 0){
		document.getElementById("email").focus();
		alert("Campo e-mail não pode estar vazio!");
	} else if(cel.value == "" || cel.value.trim().length != 14){
		document.getElementById("cel").focus();
		alert("Celular inválido!");
	} else if(cep.value == "" || cep.value.trim().length != 9){
		document.getElementById("cep").focus();
		alert("Cep inválido!");
	} else if(endereco.value == "" || endereco.value.trim().lenght == 0){
		document.getElementById("endereco").focus();
		alert("Campo endereço não pode estar vazio!")
	} else{
		return true;
	}
}

function limparCampos() {
	var textFields = document.getElementsByTagName("input");
	for (var i = 0; i < textFields.length; i++) {
		if (textFields[i].type == "text") {
			textFields[i].style.backgroundColor = "";
			textFields[i].style.borderColor = "";
		}
	}
}

function coresMascara(t) {
	var l = t.value;
	var m = l.length;
	var x = t.maxLength;
	if (m == 0) {
		t.style.borderColor = "";
		t.style.backgroundColor = "";
	}
	else if (m < x) {
		t.style.borderColor = corIncompleta;
		t.style.backgroundColor = corIncompleta;
	} else {
		t.style.borderColor = corCompleta;
		t.style.backgroundColor = corCompleta;
	}
}

function mascara(m, t, e, c) {
	var cursor = t.selectionStart;
	var texto = t.value;
	texto = texto.replace(/\D/g, '');
	var l = texto.length;
	var lm = m.length;
	if (window.event) {
		id = e.keyCode;
	} else if (e.which) {
		id = e.which;
	}
	var cursorFixo = false;
	if (cursor < l) cursorFixo = true;
	var livre = false;
	if (id == 16 || id == 19 || (id >= 33 && id <= 40)) livre = true;
	ii = 0;
	mm = 0;
	if (!livre) {
		if (id != 8) {
			t.value = "";
			j = 0;
			for (i = 0; i < lm; i++) {
				if (m.substr(i, 1) == "#") {
					t.value += texto.substr(j, 1);
					j++;
				} else if (m.substr(i, 1) != "#") {
					t.value += m.substr(i, 1);
				}
				if (id != 8 && !cursorFixo) cursor++;
				if ((j) == l + 1) break;
			}
		}
		if (c) coresMascara(t);
	}
	if (cursorFixo && !livre) cursor--;
	t.setSelectionRange(cursor, cursor);
}