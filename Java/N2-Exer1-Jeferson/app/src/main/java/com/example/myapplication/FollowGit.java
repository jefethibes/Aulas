package com.example.myapplication;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class FollowGit {

    public ProfESeguidores informacoesFollow(String info){
        String json = ConectAPI.json(info);
        ProfESeguidores profESeguidores = parseJsonFollow(json);
        return profESeguidores;
    }

    private ProfESeguidores parseJsonFollow(String json){
        try {
            ProfESeguidores profESeguidores = new ProfESeguidores();
            JSONArray jsonArray = new JSONArray(json);
            JSONObject jsonObject = jsonArray.getJSONObject(0);

            profESeguidores.setId(jsonObject.getString("id"));
            profESeguidores.setNome(jsonObject.getString("login"));

            return profESeguidores;
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return null;
    }

}
