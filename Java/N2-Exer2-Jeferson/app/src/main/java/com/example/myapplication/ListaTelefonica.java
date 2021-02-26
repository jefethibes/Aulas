package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.ArrayList;
import java.util.List;

public class ListaTelefonica extends AppCompatActivity {
    List<String> list = new ArrayList<String>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_lista_telefonica);

        getData();

        ListView listView = (ListView) findViewById(R.id.lista);
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, list);
        listView.setAdapter(adapter);
    }

    private void getData(){
        Controller controller = new Controller(getBaseContext());
        Cursor cursor = controller.list();

        while (cursor.moveToNext()){
            int index;

            index = cursor.getColumnIndexOrThrow("nome");
            String nome = cursor.getString(index);

            index = cursor.getColumnIndexOrThrow("telefone");
            String tel = cursor.getString(index);

            list.add(nome + " / " + tel);
        }
    }
}