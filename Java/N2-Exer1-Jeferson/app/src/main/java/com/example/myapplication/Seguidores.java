package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.widget.TextView;

public class Seguidores extends AppCompatActivity {

    private TextView id;
    private TextView nome;
    private  ProgressDialog load;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_seguidores);

        id = (TextView) findViewById(R.id.idSeguidor);
        nome = (TextView) findViewById(R.id.loginSguidor);

        DownloadAPISeguidores downloadAPI = new DownloadAPISeguidores();

        downloadAPI.execute();
    }

    private class DownloadAPISeguidores extends AsyncTask<Void, Void, ProfESeguidores> {

        protected void onPreExecute(){
            load = ProgressDialog.show(Seguidores.this, "Aguarde...", "Obtendo informações...");
        }

        @Override
        protected ProfESeguidores doInBackground(Void... voids) {
            FollowGit followGit = new FollowGit();
            return followGit.informacoesFollow("https://api.github.com/users/giselezrossi/followers");
        }

        protected void onPostExecute(ProfESeguidores profESeguidores){
            id.setText(profESeguidores.getId());
            nome.setText(profESeguidores.getNome());
            load.dismiss();
        }
    }
}