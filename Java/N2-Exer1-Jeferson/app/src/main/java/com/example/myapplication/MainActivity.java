package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.content.Intent;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView id;
    private TextView nome;
    private  ProgressDialog load;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        id = (TextView) findViewById(R.id.id);
        nome = (TextView) findViewById(R.id.nome);

        DownloadAPI downloadAPI = new DownloadAPI();

        downloadAPI.execute();

        Button button = (Button) findViewById(R.id.buttonSeguir);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this, Seguidores.class);
                startActivity(intent);
            }
        });
    }

    private class DownloadAPI extends AsyncTask<Void, Void, ProfESeguidores>{

        protected void onPreExecute(){
            load = ProgressDialog.show(MainActivity.this, "Aguarde...", "Obtendo informações...");
        }

        @Override
        protected ProfESeguidores doInBackground(Void... voids) {
            UserGit userGit = new UserGit();
            return userGit.informacoes("https://api.github.com/users/giselezrossi");
        }

        protected void onPostExecute(ProfESeguidores profESeguidores){
            id.setText(profESeguidores.getId());
            nome.setText(profESeguidores.getNome());
            load.dismiss();
        }
    }
}