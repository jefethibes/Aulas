package com.example.myapplication;

import android.graphics.Bitmap;

public class ChuckNorris {

    private Bitmap foto;
    private String value;

    public String getValue() {
        return value;
    }

    public void setValue(String value) {
        this.value = value;
    }

    public Bitmap getFoto() {
        return foto;
    }

    public void setFoto(Bitmap foto) {
        this.foto = foto;
    }

}
