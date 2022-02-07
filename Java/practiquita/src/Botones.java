
/**
 * Botones
 */
import javax.swing.JButton;
import javax.swing.JFrame;

public class Botones {

    public static void boton(JFrame a, String texto) {
        JButton boton = new JButton();
        boton.setText(texto);
        boton.setSize(100, 50);
        a.add(boton);
    }
}