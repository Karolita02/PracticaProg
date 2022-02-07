import java.util.Scanner;
import java.lang.Math;

public class examen {
    public static float diametro;

    // aka son variables publicas
    public static void main(String[] args) {
        // calcular el perimetro y el area del circulo dado su DIAMETRO (intente
        // optimizarlo lo mas posible) y (use funciones)
        // pistas: la clase Math tiene una funcion para mostrar el numeor PI, la clase
        // math saca valor absoluto ABS.
        // objetivo: lograr que el programa nunca falle (analizar cada posibilidad)
        // perimetro = 2 PI r
        // area = PI r^2
        // radio = Diametro/2
        funcionDoWhile();
        System.out.println("Perimetro " + calcPerimetro() + " Area " + calcArea());
    }

    // aki van las funciones, pa q sepas bb
    // pa q sepas bb parece que las funciones en java necesitan ser public static
    // para funcionar ><
    public static float calcPerimetro() {
        return (float) (2 * Math.PI * (diametro / 2));
    }

    public static float calcArea() {
        return (float) (Math.PI * Math.pow((diametro / 2), 2));
    }

    public static void funcionDoWhile() {
        do {
            System.out.println("Ingrese el diametro del círculo");
            Scanner leer = new Scanner(System.in);
            diametro = leer.nextFloat();
        } while (diametro <= 0);

    }

}
