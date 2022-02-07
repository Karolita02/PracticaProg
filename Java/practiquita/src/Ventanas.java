import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.BorderLayout;

/**
 * Ventanas
 */
public class Ventanas {
    public static void main(String[] args) {
        JFrame ventana = new JFrame();
        ventana.setVisible(true);
        ventana.setLocationRelativeTo(null);
        ventana.setDefaultCloseOperation(ventana.EXIT_ON_CLOSE);
        ventana.setLayout(new BorderLayout());
        ventana.setSize(500, 500);
        
    }
}