import java.util.Scanner;
import java.lang.Math;
import java.text.DecimalFormat;
import java.time.format.FormatStyle;

public class Arreglos {
    public static int figuras[][];
    public static float resultado[][];
    public static String figurita;

    public static void main(String[] args) {
        // te van a dar 1 arreglo de 2 dimensiones arreglo[a][b], las posiciones b
        // contienen los lados del objeto por ejemplo de un triangulo tendrian la base y
        // la altura
        // de un cuadrado igualmente, en las posiciones b solo habran 2 medidas
        // las posiciones "a" te serviran como identificadores para distinguir la
        // primera de la segunda
        // por ejemplo vector[0][0] = lado 1 de la primera figura, vector [0][1] = lado
        // 2 de la primera figura
        //
        // el vector se va a generar automaticamente mediante calculos, lado[0] =
        // a+5*b+2, lado[1] = b+8*a+b
        // en el vector van a haber 3 clases de figuras, el cuadrado o rectangulo sera
        // cuando "a" sea par, el triangulo sera cuando "a" sea impar y el circulo sera
        // cuando "a" sea multiplo de 3
        //
        // en el caso del circulo el radio será la posicion 0 en "b", ignore la posicion
        // 1 en "b"
        //
        // almacenar en un arreglo las areas y perimetros (un areglo de 2 dimenciones
        // tome como ejemplo el arreglo de los lados de las figuras)
        // e imprimalos
        //
        // la cantidad de figuras las decide el usuaio :3 ><
        // int arreglo[][] = new int[2][3];

        int cantFiguras;
        do {
            System.out.println("Ingrese la cantidad de figuras");
            Scanner leer = new Scanner(System.in);
            cantFiguras = leer.nextInt();
        } while (cantFiguras <= 0);
        figuras = new int[cantFiguras][2];
        resultado = new float[cantFiguras][2];
        llenarArreglo(cantFiguras);
        for (int x = 0; x < cantFiguras; x++) {
            comprobarFigura(x);
            imprimir(x);
        }

    }

    public static void llenarArreglo(int cantFiguras) {
        for (int x = 0; x < cantFiguras; x++) {
            figuras[x][0] = x + 5 * 0 + 2;
            figuras[x][1] = 1 + 8 * x + 1;
        }
    }

    public static void comprobarFigura(int x) {
        if (x == 0) {
            resultado[x][0] = areaRec(x);
            resultado[x][1] = perimetroRec(x);
            figurita = "Rectangulo";
        } else if (x % 3.0 == 0) {// circulo
            resultado[x][0] = areaCirculo(x);
            resultado[x][1] = perimetroCirculo(x);
            figurita = "Circulo";
        } else if (x % 2.0 == 0) {// cuadrados
            resultado[x][0] = areaRec(x);
            resultado[x][1] = perimetroRec(x);
            figurita = "Rectangulo";
        } else {// triangulo
            resultado[x][0] = areaTriangulo(x);
            resultado[x][1] = perimetroTriangulo(x);
            figurita = "Triangulo";
        }
    }

    public static void imprimir(int x) {
        DecimalFormat decimal = new DecimalFormat("#.##"); // 35 = #
        System.out.println(x + ") El area del " + figurita + " es " + decimal.format(resultado[x][0]));
        System.out.println(x + ") El perimetro del " + figurita + " es " + decimal.format(resultado[x][1]));
    }

    public static int areaRec(int x) {
        return figuras[x][0] * figuras[x][1];
    }

    public static int perimetroRec(int x) {
        return 2 * figuras[x][0] + 2 * figuras[x][1];
    }

    public static float areaTriangulo(int x) {
        return figuras[x][0] * figuras[x][1] / 2;
    }

    public static float perimetroTriangulo(int x) {
        float c;
        c = (float) Math.sqrt(Math.pow(figuras[x][0], 2) + Math.pow(figuras[x][1], 2));
        return figuras[x][0] + figuras[x][1] + c;
    }

    public static float areaCirculo(int x) {
        return (float) (Math.PI * Math.pow(figuras[x][0], 2));

    }

    public static float perimetroCirculo(int x) {
        return (float) (2 * Math.PI * figuras[x][0]);
    }
}