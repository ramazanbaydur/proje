import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextArea;

public class gorselElle3 {

	public static void main(String[] args) {
		JFrame panel = new JFrame();
		
		JTextArea mesaj = new JTextArea();
		mesaj.setBounds(50, 50, 250, 150);
		
		JButton buton = new JButton("çalıştır");
		buton.setBounds(50, 250, 100, 30);
		
		JLabel label = new JLabel("karakter:");
		label.setBounds(50, 300, 100, 20);
	
		
		JLabel label2 = new JLabel("kelime sayısı:");
		label2.setBounds(50, 350, 100, 50);
		
		JPasswordField sifre = new JPasswordField();//şifre yazdırmak için
		
		buton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String yazi = mesaj.getText();
				
				buton.add(mesaj);
				String kelime[] = yazi.split("\\s");
				label.setText("uzunluk:"+yazi.length());
				label2.setText("kelime sayısı:"+kelime.length);
			}
		});
		panel.add(label2);
		panel.add(label);
		panel.add(buton);
		panel.add(mesaj);
		
		panel.setSize(500, 500);
		panel.setLayout(null);
		panel.setVisible(true);

	}

}
