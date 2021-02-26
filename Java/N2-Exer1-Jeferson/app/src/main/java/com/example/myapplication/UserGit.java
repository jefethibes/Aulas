package com.example.myapplication;

import org.json.JSONException;
import org.json.JSONObject;

public class UserGit {

    public ProfESeguidores informacoes(String info){
        String json = ConectAPI.json(info);
        ProfESeguidores profESeguidores = parseJson(json);
        return profESeguidores;
    }

    private ProfESeguidores parseJson(String json){
        try {
            ProfESeguidores profESeguidores = new ProfESeguidores();

            JSONObject jsonObject = new JSONObject(json);
            profESeguidores.setId(jsonObject.getString("id"));
            profESeguidores.setNome(jsonObject.getString("login"));

            return profESeguidores;
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return null;
    }
}
