package Practica;

import javax.swing.JLabel;
import java.awt.Color;
import javax.swing.JFrame;
import java.awt.Font;

public class Label {
    private JLabel texto;
    private Font letrita;

    public Label(JFrame ventana) {
        texto = new JLabel();
        ventana.add(texto);
    }

    public void tamañoCuadro() {
        texto.setSize(300, 200);

    }

    public void colorLetraYEscala() {
        texto.setForeground(Color.BLUE);
        letrita = new Font("Arial", letrita.BOLD, 20);
        texto.setFont(letrita);
        texto.setText("Texto");
    }

    public void posicion(int x, int y) {
        texto.setLocation(x, y);
    }

    public void cambiarTexto(String textito) {

        texto.setText(textito);

    }

    public JLabel mostrarLabel() {
        return texto;
    }
}
