package com.example.myapplication;

import org.json.JSONException;
import org.json.JSONObject;

public class Conversor {

    public Perfil getPerfil(String informacoes){
        String json = ConexaoAPI.getJsonFromAPI(informacoes);
        Perfil retorno = parseJson(json);
        return retorno;
    }

    private Perfil parseJson(String json){
        try{
            Perfil perfil = new Perfil();

            JSONObject jsonObject = new JSONObject(json);
            perfil.setLogin(jsonObject.getString("login"));
            perfil.setId(jsonObject.getString("id"));

            return perfil;
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return null;
    }
}
