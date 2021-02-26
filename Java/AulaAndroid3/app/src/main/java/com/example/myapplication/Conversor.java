package com.example.myapplication;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;

import org.json.JSONException;
import org.json.JSONObject;

import java.io.IOException;
import java.io.InputStream;
import java.net.URL;

public class Conversor {

    public ChuckNorris getChuckNorris(String informacoes){
        String json = Conexao.getJsonFromAPI(informacoes);
        ChuckNorris chuckNorris = parseJson(json);
        return chuckNorris;
    }

    private ChuckNorris parseJson(String json){
        try{
            ChuckNorris chuckNorris = new ChuckNorris();

            JSONObject jsonObject = new JSONObject(json);
            chuckNorris.setValue(jsonObject.getString("value"));
            String foto = jsonObject.getString("icon_url");
            chuckNorris.setFoto(baixarImagem(foto));

            return chuckNorris;
        } catch (JSONException e){
            e.printStackTrace();
        }
        return null;
    }

    private Bitmap baixarImagem(String url) {
        try {
            URL endereco = new URL(url);
            InputStream inputStream = endereco.openStream();
            Bitmap imagem = BitmapFactory.decodeStream(inputStream);
            inputStream.close();
            return imagem;
        } catch (IOException e) {
            e.printStackTrace();
        }
        return null;
    }
}
