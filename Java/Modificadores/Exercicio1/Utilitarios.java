package Exercicio1;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.text.DateFormat;

public class Utilitarios {

    public static String data(){
        Date date = new Date();
        DateFormat dateFormat = DateFormat.getDateInstance(DateFormat.SHORT);
        return dateFormat.format(date);
    }

    public static String horas(){
        Date date = new Date();
        DateFormat dateFormat = new SimpleDateFormat("HH:mm:ss");
        return dateFormat.format(date);
    }

}
