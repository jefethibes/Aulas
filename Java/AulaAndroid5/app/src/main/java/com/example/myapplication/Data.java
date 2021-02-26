package com.example.myapplication;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

public class Data extends SQLiteOpenHelper {

    public static final String BANCO = "pokemon.db";
    public static final String TABELA = "pokemons";
    public static final String ID = "_id";
    public static final String POKEMON = "pokemon";
    public static final String TIPO = "tipo";
    public static final String NUMERO_EVOLUCOES = "numero_evolucoes";
    public static final int VERSAO = 1;

    public Data(Context context) {
        super(context, BANCO, null, VERSAO);
    }

    public void onCreate(SQLiteDatabase db){
        String sql = " CREATE TABLE " + TABELA + "(" + ID + " integer primary key autoincrement,"
                + POKEMON + " text," + TIPO + " text," + NUMERO_EVOLUCOES + " int)";
        db.execSQL(sql);
    }

    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS " + TABELA);
        onCreate(db);
    }
}
