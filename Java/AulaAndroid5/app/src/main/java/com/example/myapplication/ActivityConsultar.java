package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class ActivityConsultar extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_consultar);

        Button button = (Button) findViewById(R.id.buttonConsultar);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                EditText nome = findViewById(R.id.consultaNome);
                String consultaNome = nome.getText().toString();

                Intent intent = new Intent(ActivityConsultar.this, ActivityAlterar.class);
                intent.putExtra("nome", consultaNome);
                startActivity(intent);
                finish();
            }
        });
    }
}