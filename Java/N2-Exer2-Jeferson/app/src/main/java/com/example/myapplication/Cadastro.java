package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

public class Cadastro extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cadastro);

        Button button = (Button) findViewById(R.id.cadastrar);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                TextView nome = findViewById(R.id.nome);
                TextView tel = findViewById(R.id.telefone);

                String nomeString = nome.getText().toString();
                String telString = tel.getText().toString();

                Controller controller = new Controller(getBaseContext());
                String result = controller.insert(nomeString, telString);

                Toast.makeText(getApplicationContext(), result, Toast.LENGTH_LONG).show();
                finish();

                Intent intent = new Intent(Cadastro.this, MainActivity.class);
                startActivity(intent);
            }
        });
    }
}