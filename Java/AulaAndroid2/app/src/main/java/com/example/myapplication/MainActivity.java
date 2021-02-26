package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView login;
    private TextView id;
    private ProgressDialog load;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        DownloadPerfil downloadPerfil = new DownloadPerfil();

        login = (TextView)findViewById(R.id.login);
        id = (TextView)findViewById(R.id.id);

        System.out.println(login);
        System.out.println(id);
        downloadPerfil.execute();
    }

    private class DownloadPerfil extends AsyncTask<Void, Void, Perfil>{

        @Override
        protected void onPreExecute(){
            load = ProgressDialog.show(MainActivity.this, "Aguarde...", "Obtendo Informações...");
        }

        @Override
        protected Perfil doInBackground(Void... voids) {
            Conversor util = new Conversor();
            return util.getPerfil("https://api.github.com/users/giselezrossi");
        }

        @Override
        protected  void onPostExecute(Perfil perfil){
            login.setText(perfil.getLogin());
            id.setText(perfil.getId());
            load.dismiss();
        }
    }
}