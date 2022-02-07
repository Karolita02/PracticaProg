package Practica;

import java.awt.event.*;

public class mostrarTodo {
    static TextField textField;
    static Label texto;
    static Botonsito boton;

    public static void main(String[] args) {
        Ventana ventana = new Ventana();
        textField = new TextField(ventana.MostrarVentana());
        textField.moverObjeto(20, 20);
        textField.tamaño();
        textField.cambiarLetra();
        boton = new Botonsito(ventana.MostrarVentana());
        boton.tamaño();
        boton.color();
        boton.posicion(750, 300);
        boton.cambiarTexto();
        texto = new Label(ventana.MostrarVentana());
        texto.tamañoCuadro();
        texto.colorLetraYEscala();
        texto.posicion(460, 100);
        boton.accion(darClic);

    }

    static ActionListener darClic = new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            if (e.getSource() == boton.MostrarBoton()) {
                texto.cambiarTexto(textField.regresarTexto());
            }
        }
    };
}// ah que sucedio
 // me llego una idea a la cabeza xdxd, es q ahora si funcionaaaa, ya no da error
 // jejejeje
 // volvieron los static