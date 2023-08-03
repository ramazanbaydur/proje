package vt2;
import java.sql.*;
import java.util.Scanner;
public class veri2 {

	public static void main(String[] args) throws SQLException {
		Connection a = DriverManager.getConnection("jdbc:mariadb://localhost:3306/arabalar?user=root");
		Statement st = a.createStatement();
		
		ResultSet rs = st.executeQuery("SELECT * FROM marka");
		
		while(rs.next()) {
			System.out.println(rs.getInt("id")+" - "+ rs.getString("arac_adi")+" - "+rs.getInt("fiyat"));
			
		}
		
		

	}

}
