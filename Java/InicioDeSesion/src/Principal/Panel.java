package Principal;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;

/**
 * Panel
 */
public class Panel {
    private static JPanel panel;

    public Panel(JFrame ventana, String posicion) {
        panel = new JPanel();
        ventana.add(panel, posicion);
    }

    public Panel(JPanel p, String posicion) {
        panel = new JPanel();
        p.add(panel, posicion);
    }

    public void CambiarColor(int num) {
        switch (num) {
            case 1:
                panel.setBackground(Color.YELLOW);
                break;
            case 2:
                panel.setBackground(Color.RED);
                break;
            case 3:
                panel.setBackground(Color.GREEN);
                break;
            case 4:
                panel.setBackground(Color.PINK);
                break;
            case 5:
                panel.setBackground(Color.BLUE);
                break;
            case 6:
                panel.setBackground(Color.BLACK);
                break;
            case 7:
                panel.setBackground(Color.GRAY);
                break;
            default:
                panel.setBackground(Color.WHITE);
                break;
        }
    }

}