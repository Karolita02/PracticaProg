package Principal;

/**
 * IniciarSesion
 */
public class IniciarSesion {

    public static void main(String[] args) {
        Ventana ventana = new Ventana();
        Panel panel = new Panel(ventana.MostrarVentana(), "Center");
        panel.CambiarColor(7);
    }
}