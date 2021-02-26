package com.example.myapplication;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

public class Controller {

    private SQLiteDatabase db;
    private Data data;

    public Controller(Context context){
        data = new Data(context);
    }

    public String insert(String nome, String telefone){
        ContentValues values;
        long result;

        db = data.getWritableDatabase();
        values = new ContentValues();
        values.put(Data.NOME, nome);
        values.put(Data.TELEFONE, telefone);

        result = db.insert(Data.TABELA, null, values);
        db.close();

        if (result == -1){
            return "ERROR DATA";
        } else {
            return "DATA SUCESSFULL";
        }
    }

    public Cursor list(){
        Cursor cursor;
        String[] dados = {data.NOME, data.TELEFONE};
        db = data.getReadableDatabase();
        cursor = db.query(data.TABELA, dados, null,null,null,null,null,null);

        if (cursor != null){
            cursor.moveToFirst();
        }

        db.close();
        return cursor;
    }
}
