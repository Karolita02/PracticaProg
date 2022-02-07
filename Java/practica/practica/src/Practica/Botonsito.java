package Practica;

import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Font;
import java.awt.event.*;

public class Botonsito {
    private JButton boton;
    private Font fuentesita;

    public Botonsito(JFrame ventana) {
        boton = new JButton();
        ventana.add(boton);
    }

    public void tamaño() {
        boton.setSize(200, 100);
    }

    public void color() {
        boton.setBackground(Color.pink);
    }

    public void posicion(int c, int d) {
        boton.setLocation(c, d);
    }

    public void cambiarTexto() {
        boton.setText("Duplicar");
        fuentesita = new Font("Arial", fuentesita.BOLD, 25);
        boton.setFont(fuentesita);
    }

    public void accion(ActionListener clicksito) {
        boton.addActionListener(clicksito);
    }

    public JButton MostrarBoton() {
        return boton;
    }
}// si tu te perdistee tuuuuuuu imaginaate yo :C
 // :c cositaaaaa
