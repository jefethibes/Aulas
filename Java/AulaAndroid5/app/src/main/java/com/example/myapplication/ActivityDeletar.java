package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class ActivityDeletar extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_deletar);

        Button button = (Button) findViewById(R.id.deletarPokemon);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                TextView deletePokemon = findViewById(R.id.pokemonDelete);
                String aux = deletePokemon.getText().toString();
                BancoController bancoController = new BancoController(getBaseContext());
                bancoController.delete(aux);
                Intent intent = new Intent(ActivityDeletar.this, MainActivity.class);
                startActivity(intent);
            }
        });
    }
}