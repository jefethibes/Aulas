package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import static java.lang.Integer.parseInt;

public class ActivityCadastrar extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cadastrar);

        Button button = (Button) findViewById(R.id.pokemonCadastrar);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                EditText nome = (EditText) findViewById(R.id.pokemonNome);
                EditText tipo = (EditText) findViewById(R.id.pokemonTipo);
                EditText numEvolucoes = (EditText) findViewById(R.id.numEvolucoes);

                String nomePokemon = nome.getText().toString();
                String tipoPokemon = tipo.getText().toString();
                String numEvolucoesPokemon = numEvolucoes.getText().toString();


                BancoController cadastrar = new BancoController(getBaseContext());
                String novoCadastro = cadastrar.insert(nomePokemon, tipoPokemon, parseInt(numEvolucoesPokemon));

                Toast.makeText(getApplicationContext(), novoCadastro, Toast.LENGTH_LONG).show();
                finish();
            }
        });
    }
}