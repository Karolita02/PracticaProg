package Practica;

import javax.swing.JTextField;
import javax.swing.JFrame;
import java.awt.Font;

public class TextField {
    private JTextField textField;
    private Font fuente;

    public TextField(JFrame ventana) {
        textField = new JTextField();
        ventana.add(textField);
    }

    public void moverObjeto(int a, int b) {
        textField.setLocation(a, b);
    }

    public void tamaño() {
        textField.setSize(200, 100);
    }

    public void cambiarLetra() {
        fuente = new Font("Arial", fuente.BOLD, 40);
        textField.setFont(fuente);

    }

    public String regresarTexto() {
        return textField.getText();
    }

    public JTextField mostrarTextField() {
        return textField;
    }

}
