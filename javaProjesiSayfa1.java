package vt2;

import java.sql.*;
import java.util.Scanner;

public class veri1 {

	public static void main(String[] args) throws SQLException {  
		Connection a = DriverManager.getConnection("jdbc:mariadb://localhost:3306/arabalar?user=root");
		Statement st = a.createStatement();
		Scanner input = new Scanner(System.in);
		
		System.out.println("Araç adı girin:");
		String arac_adi = input.next();
		
		System.out.println("Fiyatı girin:");
		String fiyat = input.next();
		
		String ekle = "INSERT INTO marka(arac_adi,fiyat) VALUES('"+arac_adi+"','"+fiyat+"')";
		
		
		int sonuc = st.executeUpdate(ekle);
		
		System.out.println(sonuc);
		
		st.close();
		
	}

}
