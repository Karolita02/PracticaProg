
// Lista de la Compra
// el programa va a ser como una tienda, por que te va a perguntar que desea comprar, y el usuario va a tener q ingresar lo que va a comprar
// Luego de ingresado lo que se quiere comprar la tienda preguntara si quiere comprar algo mas, y si es asi el usuaio debe ingresar lo que va a comprar
// sino la tienda debe despedirse del usuario
// al final se debe mostrar toda la lista de la compra
// use funciones y el JOptionpane gracias :3

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Nuevo {
    public static JOptionPane j;
    public static Scanner s;
    public static System d;

    public static void main(String[] args) {
        String opciones[] = new String[2];
        opciones[0] = "Si";
        opciones[1] = "No";
        d.out.println("Buenass, que desea comprar?");
        String a = j.showInputDialog(null, "Buenass, que desea comprar?");
        d.out.println(a);
        int b = 0;
        while (b != 1) {
            d.out.println("Desea comprar algo más?");
            b = j.showOptionDialog(null, "Desea comprar algo más?", "", 1, 1, null, opciones, 1);
            d.out.println(b);
            String actualizacion = actualizarLista(b);
            d.out.println(actualizacion);
            a = a + " " + actualizacion;
            d.out.println("Lista de artículos");
            d.out.println(a);
            j.showMessageDialog(null, a, "Lista de artículos", 1, null);
        }

    }

    public static String actualizarLista(int b) {
        if (b == 0) {
            String actualizacion = j.showInputDialog(null, "Ingrese los artículos");
            return actualizacion;
        } else {
            j.showMessageDialog(null, "Un gusto atenderle, regrese pronto ;)");
            d.out.println("Un gusto atenderle, regrese pronto ;)");
            return "";
        }
    }
}
