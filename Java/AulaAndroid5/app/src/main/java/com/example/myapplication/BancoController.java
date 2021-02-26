package com.example.myapplication;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

public class BancoController {

    private SQLiteDatabase db;
    private Data banco;

    public BancoController(Context context){
        banco = new Data(context);
    }

    public String insert(String pokemon, String tipo, int numeroEvolucoes){
        ContentValues values;
        long result;

        db = banco.getWritableDatabase();
        values = new ContentValues();
        values.put(Data.POKEMON, pokemon);
        values.put(Data.TIPO, tipo);
        values.put(Data.NUMERO_EVOLUCOES, numeroEvolucoes);

        result = db.insert(Data.TABELA, null, values);
        db.close();

        if (result == -1){
            return "DATA ERROR!!!";
        } else {
            return "DATA SUCESS!!!";
        }
    }

    public Cursor list(){
        Cursor cursor;
        String[] dados = {banco.POKEMON, banco.TIPO, banco.NUMERO_EVOLUCOES};
        db = banco.getReadableDatabase();
        cursor = db.query(banco.TABELA, dados, null, null, null,
                null, null, null);

        if (cursor != null){
            cursor.moveToFirst();
        }

        db.close();
        return cursor;
    }

    public void delete(String nome){
        String where = Data.POKEMON + " ='" + nome + "'";
        db = banco.getReadableDatabase();
        db.delete(Data.TABELA, where, null);
        db.close();
    }

    public Cursor consulta(String nome){
        Cursor cursor;
        String[] dados = {banco.POKEMON, banco.TIPO, banco.NUMERO_EVOLUCOES};
        String where = Data.POKEMON + " = '" + nome + "'";
        db = banco.getReadableDatabase();
        cursor = db.query(banco.TABELA, dados, where, null, null,
                null, null, null);

        if (cursor != null){
            cursor.moveToFirst();
        }

        db.close();
        return cursor;
    }

    public void update(String nome, String tipo, String numEvol){
        ContentValues values;
        String where;

        db = banco.getWritableDatabase();

        where = Data.POKEMON + "= '" + nome + "'";

        values = new ContentValues();
        values.put(Data.POKEMON, nome);
        values.put(Data.TIPO, tipo);
        values.put(Data.NUMERO_EVOLUCOES, numEvol);

        db.update(Data.TABELA, values, where, null);
        db.close();
    }
}
