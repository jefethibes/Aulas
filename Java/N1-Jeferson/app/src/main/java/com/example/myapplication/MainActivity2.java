package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity2 extends AppCompatActivity {

    public EditText n1;
    public EditText n2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        n1 = findViewById(R.id.n1);
        n2 = findViewById(R.id.n2);
        final String nome = (String) getIntent().getExtras().get("nome");

        Button button = (Button) findViewById(R.id.media);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String n1Value = n1.getText().toString();
                String n2Value = n2.getText().toString();
                Intent intent = new Intent(MainActivity2.this, MainActivity3.class);
                intent.putExtra("n1", n1Value);
                intent.putExtra("n2", n2Value);
                intent.putExtra("nome", nome);
                startActivity(intent);
            }
        });

    }
}