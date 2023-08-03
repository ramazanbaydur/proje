import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class gorselElle2 {

	public static void main(String[] args) {
		JFrame panel = new JFrame();
		
		JLabel lbl1 = new JLabel("1. SAYIYI GİRİN:");
		lbl1.setBounds(50, 10, 100, 30);
		
		JTextField txt1 = new JTextField();
		txt1.setBounds(50, 40, 100, 30);
		
		JLabel lbl2 = new JLabel("2. SAYIYI GİRİN:");
		lbl2.setBounds(50, 70, 200, 30);
		
		JTextField txt2 = new JTextField();
		txt2.setBounds(50, 100, 100, 30);
		
		JLabel lbl3 = new JLabel("TOPLAM:");
		lbl3.setBounds(50, 130, 100, 30);
		
		JButton btn1 = new JButton("TOPLA");
		btn1.setBounds(50, 170, 100, 30);
		
		btn1.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				int a = Integer.parseInt(txt1.getText());
				int b = Integer.parseInt(txt2.getText());
				int c = a+b;
				String toplam = String.valueOf(c);
				lbl3.setText("toplam:"+toplam);
				
			}
		});
		
		panel.add(lbl1);
		panel.add(txt1);
		panel.add(lbl2);
		panel.add(txt2);
		panel.add(lbl3);
		panel.add(btn1);
		
		panel.setSize(500,500);
		panel.setLayout(null);
		panel.setVisible(true);
	}

}
