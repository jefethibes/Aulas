package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

public class ActivityListar extends AppCompatActivity {

    List<String> list = new ArrayList<String>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_listar);

        getData();

        ListView listaPokemons = (ListView) findViewById(R.id.listaPokemon);
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, list);
        listaPokemons.setAdapter(adapter);
    }

    private void getData(){
        BancoController bancoController = new BancoController(getBaseContext());
        Cursor cursor = bancoController.list();

        while (cursor.moveToNext()){
            int index;

            index = cursor.getColumnIndexOrThrow("pokemon");
            String pokemon = cursor.getString(index);

            index = cursor.getColumnIndexOrThrow("tipo");
            String tipo = cursor.getString(index);

            index = cursor.getColumnIndexOrThrow("numero_evolucoes");
            String numEvolucoes = cursor.getString(index);

            list.add(pokemon + " / " + tipo + " / " + numEvolucoes);
        }
    }
}