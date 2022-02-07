package Principal;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;
import javax.swing.JButton;

/**
 * Panel
 */
public class Boton {
    private static JButton boton;

    public Boton(JFrame ventana, String posicion) {
        boton = new JButton();
        ventana.add(boton, posicion);
    }

    public Boton(JPanel p, String posicion) {
        boton = new JButton();
        p.add(boton, posicion);
    }