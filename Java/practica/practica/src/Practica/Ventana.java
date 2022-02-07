package Practica;

import javax.swing.JFrame;
import java.awt.BorderLayout;

public class Ventana {
    private JFrame ventana;

    public Ventana() {
        ventana = new JFrame();
        ventana.setVisible(true);
        ventana.setSize(1000, 500);
        ventana.setLayout(null);
        ventana.setDefaultCloseOperation(ventana.EXIT_ON_CLOSE);
        ventana.setLocationRelativeTo(null);
        ventana.setResizable(false);
    }

    public JFrame MostrarVentana() {
        return ventana;
    }
}
// izquierda arriba
// valores de x se mueven a la derecha
// y abajo
