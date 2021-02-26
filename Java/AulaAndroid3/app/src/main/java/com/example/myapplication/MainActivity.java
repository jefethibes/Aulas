package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.app.ProgressDialog;
import android.os.AsyncTask;
import android.os.Bundle;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView value;
    private ImageView foto;
    private ProgressDialog load;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        DownloadChuck downloadChuck = new DownloadChuck();

        value = (TextView)findViewById(R.id.value);
        foto = (ImageView)findViewById(R.id.foto);

        downloadChuck.execute();
    }

    private class DownloadChuck extends AsyncTask<Void, Void, ChuckNorris> {

        @Override
        protected void onPreExecute(){
            load = ProgressDialog.show(MainActivity.this, "Aguarde...", "Obtendo Informações...");
        }

        @Override
        protected ChuckNorris doInBackground(Void... voids) {
            Conversor util = new Conversor();
            return util.getChuckNorris("https://api.chucknorris.io/jokes/random");
        }

        @Override
        protected  void onPostExecute(ChuckNorris chuckNorris){
            foto.setImageBitmap(chuckNorris.getFoto());
            value.setText(chuckNorris.getValue());
            load.dismiss();
        }
    }
}