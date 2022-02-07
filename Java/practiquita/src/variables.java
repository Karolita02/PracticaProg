
import java.util.Scanner;

import jdk.jshell.spi.SPIResolutionException;

import java.lang.Math;
import java.text.DecimalFormat;

public class variables {
    public static void main(String[] args) {
        // tipos de Variables
        // int, long
        // float, double
        // char, String
        // boolean
        // Leer e imprimir:
        /*
         * String a; Scanner leer = new Scanner(System.in); a = leer.nextLine();
         * System.out.println(a);
         */
        // DecimalFormat formato = new DecimalFormat("#.##"); 2 decimales

        // dado 2 lados de 1 triangulo rectangulo determine la altura y
        // el area del triangulo y el perimetro (Math.pow = elevar al cuadrado)
        float a, b, c, perimetro, area;
        System.out.println("Ingrese los dos lados del triangulo");
        Scanner leer = new Scanner(System.in);
        b = leer.nextFloat(); // si la variable b es float debes leer float, line es para String ><
        c = leer.nextFloat();
        a = (float) Math.pow(c, 2) - (float) Math.pow(b, 2);
        a = (float) Math.sqrt(a);
        perimetro = a + b + c;
        area = (b * a) / 2;
        System.out.println(
                "La altura del triángulo es de " + a + " Su perimetro es " + perimetro + " Su area es de " + area);

    }
}
