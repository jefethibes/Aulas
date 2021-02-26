package com.example.myapplication;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;

public class ConectAPI {

    public static String json(String url){
        String retorno = "";
        try {

            URL apiProf = new URL(url);
            HttpURLConnection connection;
            connection = (HttpURLConnection) apiProf.openConnection();
            connection.setRequestMethod("GET");
            connection.setReadTimeout(50000);
            connection.connect();

            int codigoResposta = connection.getResponseCode();
            InputStream is;

            if(codigoResposta == HttpURLConnection.HTTP_OK){
                is = connection.getInputStream();
            } else {
                is = connection.getErrorStream();
            }

            retorno = converteToString(is);
            is.close();
            connection.disconnect();

        } catch (MalformedURLException e) {
            e.printStackTrace();
        } catch (ProtocolException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }

        return retorno;
    }

    private static String converteToString(InputStream is){
        StringBuffer buffer = new StringBuffer();
        try{
            BufferedReader br;
            String linha;

            br = new BufferedReader(new InputStreamReader(is));
            while ((linha = br.readLine()) != null){
                buffer.append(linha);
            }

            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        return buffer.toString();
    }
}
