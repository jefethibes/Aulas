package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity3 extends AppCompatActivity {

    public TextView printNome;
    public TextView printMedia;
    public TextView resultado;
    public Double media;
    public String mediaTexto;
    public String resultadoFinal;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main3);

        String n1 = (String) getIntent().getExtras().get("n1");
        String n2 = (String) getIntent().getExtras().get("n2");
        String nome = (String) getIntent().getExtras().get("nome");

        printNome = (TextView)findViewById(R.id.nome);
        printMedia = (TextView)findViewById(R.id.media);
        resultado = (TextView)findViewById(R.id.resultado);

        media = (Double.parseDouble(n1) + Double.parseDouble(n2)) / 2;

        mediaTexto = media.toString();

        printNome.setText(nome);
        printMedia.setText(mediaTexto);

        if(media >= 6){
            resultadoFinal = "Aprovado!";
            resultado.setText(resultadoFinal);
        } else {
            resultadoFinal = "Reprovado!";
            resultado.setText(resultadoFinal);
        }

    }

}