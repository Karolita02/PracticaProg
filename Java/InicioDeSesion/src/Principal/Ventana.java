package Principal;

import javax.swing.JFrame;
import java.awt.BorderLayout;

public class Ventana {
    private static JFrame ventana;

    public Ventana() {
        ventana = new JFrame();
        ventana.setVisible(true);
        ventana.setSize(500, 500);
        ventana.setLayout(new BorderLayout());
        ventana.setDefaultCloseOperation(ventana.EXIT_ON_CLOSE);
        ventana.setLocationRelativeTo(null);
    }

    public JFrame MostrarVentana() {
        return ventana;
    }
}