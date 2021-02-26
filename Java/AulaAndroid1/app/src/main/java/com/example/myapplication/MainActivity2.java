package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity2 extends AppCompatActivity {

    public EditText sobrenome;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        sobrenome = findViewById(R.id.sobrenome);

        Button button = (Button) findViewById(R.id.buttonSobrenome);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String sobrenomeValue = sobrenome.getText().toString();
                Intent intent = new Intent(MainActivity2.this, MainActivity.class);
                intent.putExtra("sobrenome", sobrenomeValue);
                startActivity(intent);
            }
        });
    }
}