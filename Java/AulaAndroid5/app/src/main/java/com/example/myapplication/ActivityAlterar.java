package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class ActivityAlterar extends AppCompatActivity {

    TextView alteraNome;
    TextView alteraTipo;
    TextView alteraNumEvolucao;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_alterar);

        String nomeConsulta = this.getIntent().getStringExtra("nome");

        getList(nomeConsulta);

        Button button = (Button) findViewById(R.id.alterarPokemon);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                alteraNome.findViewById(R.id.alteraNome);
                alteraTipo.findViewById(R.id.alteraTipo);
                alteraNumEvolucao.findViewById(R.id.alteraNumEvolucao);

                String nome = alteraNome.getText().toString();
                String tipo = alteraTipo.getText().toString();
                String numEvo = alteraNumEvolucao.getText().toString();

                BancoController bancoController = new BancoController(getBaseContext());
                bancoController.update(nome, tipo, numEvo);

                Intent intent = new Intent(ActivityAlterar.this, MainActivity.class);
                startActivity(intent);
                finish();
            }
        });
    }

    protected void getList(String nome){
        BancoController bancoController = new BancoController(getBaseContext());
        Cursor cursor = bancoController.consulta(nome);

        int index;

        index = cursor.getColumnIndexOrThrow("pokemon");
        String nomeRetorno = cursor.getString(index);

        index = cursor.getColumnIndexOrThrow("tipo");
        String tipo = cursor.getString(index);

        index = cursor.getColumnIndexOrThrow("numero_evolucoes");
        String numEvolucoes = cursor.getString(index);

        alteraNome = (TextView) findViewById(R.id.alteraNome);
        alteraTipo = (TextView) findViewById(R.id.alteraTipo);
        alteraNumEvolucao = (TextView) findViewById(R.id.alteraNumEvolucao);

        alteraNome.setText(nomeRetorno);
        alteraTipo.setText(tipo);
        alteraNumEvolucao.setText(numEvolucoes);
    }
}