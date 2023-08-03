package javaProjem;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.sql.*;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

public class sayfa1 {

	public static void main(String[] args) throws SQLException {
		Connection baglanti = DriverManager.getConnection("jdbc:mariadb://localhost:3306/ogrenci?user=root");
		Statement st = baglanti.createStatement();
		
		ResultSet rs = st.executeQuery("SELECT * FROM ogrenci");
		rs = st.executeQuery("INSERT INTO ogrenci SET ad='Nazmi',soyad='Kezer'");
		
		while (rs.next()) {
			System.out.println(rs.getInt("id")+"."+rs.getString("ad")+" "+rs.getString("soyad"));
		}
		
		
		
		
		JFrame panel = new JFrame("ÖĞRENCİ İŞLERİ");
		
		JLabel label = new JLabel("Ad:");
		label.setBounds(50, 40, 100, 20);
		
		JLabel label2 = new  JLabel("Soyad:");
		label2.setBounds(50, 120, 100, 20);
		
		JLabel label3 = new JLabel();
		label3.setBounds(50, 150, 100, 50);
		
		JTextField text = new JTextField();
		text.setBounds(50, 80, 100, 20);
		
		JTextField text2 = new JTextField();
		text2.setBounds(50, 150, 100, 20);
		
		JButton buton = new JButton("EKLE");
		buton.setBounds(50, 180, 100, 20);
		
		JRadioButton radio = new JRadioButton("1.Sınıf");
		radio.setBounds(50, 300, 100, 20);
		radio.setText("1.sınıf");
		
		JRadioButton radio2 = new JRadioButton("2.Sınıf");
		radio2.setBounds(50, 320, 100, 20);
		radio2.setText("2.sınıf");
		
		radio.addItemListener(new ItemListener() {
			Connection baglan = null;
			Statement st = null;
			
			@Override
			public void itemStateChanged(ItemEvent e) {
				try {
					baglan = DriverManager.getConnection("jdbc:mariadb://localhost:3306/ogrenci?user=root");
					String sql2 = "INSERT INTO ogrenciler SET hatirla='"+radio.getText()+"','"+radio2.getText()+"'";
				} catch (SQLException e1) {
					
					e1.printStackTrace();
				}
				
			}
		});
		
		buton.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String yazi = text.getText();
				if (yazi!= null) {
					Connection baglan = null;
					Statement st = null;
					
						try {
							baglan = DriverManager.getConnection("jdbc:mariadb://localhost:3306/ogrenci?user=root");
						} catch (SQLException e1) {
							
							e1.printStackTrace();
						}
						try {
							st = baglan.createStatement();
						} catch (SQLException e1) {
							
							e1.printStackTrace();
						}
						String sql = "INSERT INTO ogrenci SET ad='"+text.getText()+"',soyad='"+text2.getText()+"'";
						try {
							st.execute(sql);
						} catch (SQLException e1) {
						
							e1.printStackTrace();
						}
						System.out.println("Güncelleme Başarılı");
						
						label.setText("Ekleme İşlemi Başarılı!!"+yazi);
				}
				
				
			}
		});
		
		panel.add(radio2);
		panel.add(radio);
		panel.add(buton);
		panel.add(text2);
		panel.add(text);
		panel.add(label3);
		panel.add(label2);
		panel.add(label);
		
		panel.setSize(500, 500);
		panel.setLayout(null);
		panel.setVisible(true);
	}

}
